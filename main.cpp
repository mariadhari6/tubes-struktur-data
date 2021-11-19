#include "fungsi.cpp"
#include "CRUD.cpp"
    linked_list Data;
    string Judul, ID_Buku, Kode_rak;
    int Thn_terbit, Cetakan_ke;
    string Penulis, Penerbit, Kota_terbit, Jenis_Buku;
    string Genre[10];
    string judul_tujuan, id_tujuan;
    bool sama;
    int i;
void Update(){
    do
    {
        Judul=InputJudul();
        sama=CekJudul(Data, Judul);
    } while (sama==true);
    Penulis=InputPenulis();
    Kode_rak=InputKodeRak();
    Jenis_Buku=InputJenisBuku();
    for (i = 0; i < 10; i++)
    {
        char tambah;
        tambah='n';
        do{
            Genre[i]=InputGenre(Jenis_Buku);
            for (int z = 0; z<i; z++)
            {
                if (Genre[i].compare(Genre[z])==0)
                {
                    sama=true;
                    break;
                }
                else
                {
                    sama=false;
                }
            }
        } while (sama==true);
        if (i<9)
        {
            cout<<"Tambah genre?(y): ";
            cin>>tambah;
        }
        if (tambah!='y')
        {
            break;
        }
    }
    Thn_terbit=TahunTerbit();
    Penerbit=InputPenerbit();
    Cetakan_ke=InputCetakan();
    Kota_terbit=InputKota();
}
void Input_Data(){
    sama=false;
    char tambah;
    cin.get();
    do
    {
        ID_Buku=InputIDBuku();
        sama=CekID(Data, ID_Buku);
    } while (sama==true);
    do
    {
        Judul=InputJudul();
        sama=CekJudul(Data, Judul);
    } while (sama==true);
    Penulis=InputPenulis();
    Kode_rak=InputKodeRak();
    Jenis_Buku=InputJenisBuku();
    for (i = 0; i < 10; i++)
    {
        tambah='n';
        do{
            Genre[i]=InputGenre(Jenis_Buku);
            for (int z = 0; z<i; z++)
            {
                if (Genre[i].compare(Genre[z])==0)
                {
                    sama=true;
                    break;
                }
                else
                {
                    sama=false;
                }
            }
        } while (sama==true);
        if (i<9)
        {
            cout<<"Tambah genre?(y): ";
            cin>>tambah;
        }
        if (tambah!='y')
        {
            break;
        }
    }
    Thn_terbit=TahunTerbit();
    Penerbit=InputPenerbit();
    Cetakan_ke=InputCetakan();
    Kota_terbit=InputKota();
}
int main() {
    Buat_data(Data);
    int dipilih;
    address p;
    while (true)
    {
        system("clear");
        dipilih=Pilihan();
        if (dipilih==1)
        {
            system("clear");
            Tampilkan_Data(Data);
        }
        else if (dipilih==2)
        {
            system("clear");
            Input_Data();
            p=Alokasi(Judul, ID_Buku, Kode_rak,
                      Thn_terbit, Cetakan_ke,
                      Penulis, Penerbit, Kota_terbit,
                      Jenis_Buku, Genre, i);
            Data=Tambah_Awal(Data, p); 
        }
        else if (dipilih==3)
        {
            system("clear");
            Input_Data();
            p=Alokasi(Judul, ID_Buku, Kode_rak,
                      Thn_terbit, Cetakan_ke,
                      Penulis, Penerbit, Kota_terbit,
                      Jenis_Buku, Genre, i);
            if (Data.mulai==NULL)
            {
                Data=Tambah_Awal(Data, p);
                cin.get();
                system("clear");
                continue;
            }
            Data=Tambah_Akhir(Data, p);
        }
        else if (dipilih==4)
        {
            system("clear");
            if (Data.mulai==NULL)
            {
                cout<<"Data Perpustakaan Masih Kosong !!!\n";
                continue;
            }
            
            Judul=InputJudul();
            sama=CekJudul(Data, Judul);
            if (sama==false)
            {
                cout<<"Buku Yang Dicari Tidak Ada !!!\n";
                continue;
            }
            Data=Delete_Buku(Data, Judul);         
        }
        else if (dipilih==5)
        {
            system("clear");
            if (Data.mulai==NULL)
            {
                cout<<"Data Perpustakaan Masih Kosong !!!\n";
                continue;
            }
            Judul=InputJudul();
            sama=CekJudul(Data, Judul);
            if (sama==false)
            {
                cout<<"Buku Yang Dicari Tidak Ada !!!\n";
                continue;
            }
            Cari_Buku(Data, Judul);
        }
        else if (dipilih==6)
        {
            system("clear");
            Hitung_Buku(Data);
        }
        else if (dipilih==7)
        {
            system("clear");
            if (Data.mulai==NULL)
            {
                cout<<"Data Perpustakaan Masih Kosong !!!\n";
                continue;
            }
            cin.get();
            cout<<"Judul Tujuan\t: ";
            cin.get(Masukkan, 90);
            judul_tujuan=Masukkan;
            sama=CekJudul(Data, judul_tujuan);
            if (sama==false)
            {
                cout<<"Buku Yang Dicari Tidak Ada !!!\n";
                continue;
            }
            Input_Data();
            p=Alokasi(Judul, ID_Buku, Kode_rak,
                      Thn_terbit, Cetakan_ke,
                      Penulis, Penerbit, Kota_terbit,
                      Jenis_Buku, Genre, i);
            Data=Tambah_Setelah(Data, p, judul_tujuan);          
        }
        else if (dipilih==8)
        {
            system("clear");
            if (Data.mulai==NULL)
            {
                cout<<"Data Perpustakaan Masih Kosong !!!\n";
                continue;
            }
            cout<<"IDl Tujuan\t: ";
            cin>>id_tujuan;
            sama=CekID(Data, id_tujuan);
            if (sama==false)
            {
                cout<<"Buku Yang Dicari Tidak Ada !!!\n";
                continue;
            }
            Update();
            p=Alokasi(Judul, id_tujuan, Kode_rak,
                      Thn_terbit, Cetakan_ke,
                      Penulis, Penerbit, Kota_terbit,
                      Jenis_Buku, Genre, i);
            Data=Update_Data(Data, p, id_tujuan, i);
        }
        else if (dipilih==9)
        {
            system("clear");
            return -1;
        }
        cin.get();
        cin.get();       
    }
    return 0;
}