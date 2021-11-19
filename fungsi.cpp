#include "library.h"

void Buat_data(linked_list Data){
    Data.mulai=NULL;
}
int Pilihan(){
    int pilih;
    cout<<"1.Tampilkan Data Buku\n2.Tambah Buku Diawal\n3.Tambah ";
    cout<<"Buku Diakhir\n4.Delete Buku\n5.Cari Buku\n6.Hitung ";
    cout<<"Jumlah Buku\n7.Tambah Buku Setelah\n8.Update Data Buku\n9.Keluar Program\n  Pilih\t: ";
    cin>>dataBuku;
    try
    {
        pilih=stoi(dataBuku);
    }
    catch(const std::exception& e)
    {
        pilih=0;
    }
    return pilih;
}


//Input Data Atau Field
string InputIDBuku(){
    cout<<"ID Buku\t: ";
    cin>>dataBuku;
    return dataBuku;
}

string InputJudul(){
    cin.get();
    cout<<"Judul\t: ";
    cin.get(Masukkan, 90);
    dataBuku=Masukkan;
    return dataBuku;
}

string InputPenulis(){
    cin.get();
    cout<<"Penulis\t: ";
    cin.get(Masukkan, 90);
    dataBuku=Masukkan;
    return dataBuku;
}

string InputKodeRak(){
    cin.get();
    cout<<"Kode Rak\t: ";
    cin.get(Masukkan, 5);
    dataBuku=Masukkan;
    return dataBuku;
}

string InputJenisBuku(){
    int pilih;
    bool eror;
    do{
        eror=false;
        cout<<"Jenis Buku\t: 1. Fiksi\n";
        cout<<"\t\t  2. Non-Fiksi\n";
        cout<<"Pilih: ";
        cin>>dataBuku;
        try
        {
            pilih=stoi(dataBuku);
        }
        catch(const std::exception& e)
        {
            eror=true;
        }
        
    } while (eror==true || (pilih!=1 && pilih!=2));
    if(pilih==1){
        dataBuku="Fiksi";
    }
    else if (pilih==2)
    {
        dataBuku="Non-Fiksi";
    }
    return dataBuku;
}
string InputGenre(string jns_buku){
    int pilih;
    bool gagal_konversi=false;
    if(jns_buku.compare("Fiksi")==0){
        do{
            gagal_konversi=false;
            cout<<"Genre\t: 1. Romance\n";
            cout<<"\t  2. Action Adventure\n";
            cout<<"\t  3. Science Fiction\n";
            cout<<"\t  4. Fantasy\n";
            cout<<"\t  5. Speculative Fiction\n";
            cout<<"\t  6. Suspense\n";
            cout<<"\t  7. Young Adult\n";
            cout<<"\t  8. New Adult\n";
            cout<<"\t  9. Horror\n";
            cout<<"\t  10. Thriller\n";
            cout<<"\t  11. Paranormal\n";
            cout<<"\t  12. Ghost\n";
            cout<<"\t  13. Mystery\n";
            cout<<"\t  14. Crime\n";
            cout<<"\t  15. Police Procedurals\n";
            cout<<"\t  16. Historical\n";
            cout<<"\t  17. Western\n";
            cout<<"\t  18. Family Saga\n";
            cout<<"\t  19. Women’s Fiction\n";
            cout<<"\t  20. Magic Realism\n";
            cout<<"\t  21. Literary Fiction\n";
            cout<<"  Pilih\t: ";
            cin>>dataBuku;
            try
            {
                pilih=stoi(dataBuku);
            }
            catch(const std::exception& e)
            {
                gagal_konversi=true;
            }
            dataBuku=JenisFiksi(pilih);
        } while (gagal_konversi==true);
    }
    else if(jns_buku.compare("Non-Fiksi")==0){
        do{
            gagal_konversi=false;
            cout<<"Genre\t: 1. Makalah Akademik\n";
            cout<<"\t  2. Penerbitan Akademik\n";
            cout<<"\t  3. Almanak\n";
            cout<<"\t  4. Otobiografi\n";
            cout<<"\t  5. Biografi\n";
            cout<<"\t  6. Cetak Biru\n";
            cout<<"\t  7. Laporan Buku\n";
            cout<<"\t  8. Buku Harian\n";
            cout<<"\t  9. Kamus\n";
            cout<<"\t  10. Panduan dan Manual\n";
            cout<<"\t  11. Buku Pedoman\n";
            cout<<"\t  12. Sejarah\n";
            cout<<"\t  13. Jurnal\n";
            cout<<"\t  14. Kritik Sastra\n";
            cout<<"\t  15. Filsafat\n";
            cout<<"\t  16. Fotografi\n";
            cout<<"\t  17. Travelog\n";
            cout<<"\t  18. Buku Ilmiah\n";
            cout<<"\t  19. Sains Populer\n";
            cout<<"\t  20. Esai\n";
            cout<<"  Pilih\t: ";
            cin>>dataBuku;
            try
            {
                pilih=stoi(dataBuku);
            }
            catch(const std::exception& e)
            {
                gagal_konversi=true;
            }
            dataBuku=JenisNonFiksi(pilih);
        } while (gagal_konversi==true);
    }
    return dataBuku;
}

string JenisNonFiksi(int pilih){
    if (pilih==1)
    {
        dataBuku="Makalah Akademik";
    }
    else if (pilih==2)
    {
        dataBuku="Penerbitan Akademik";
    }
    else if (pilih==3)
    {
        dataBuku="Almanak";
    }
    else if (pilih==4)
    {
        dataBuku="Otobiografi";
    }
    else if (pilih==5)
    {
        dataBuku="Biografi";
    }
    else if (pilih==6)
    {
        dataBuku="Cetak Biru";
    }
    else if (pilih==7)
    {
        dataBuku="Laporan Buku";
    }
    else if (pilih==8)
    {
        dataBuku="Buku Harian";
    }
    else if (pilih==9)
    {
        dataBuku="Kamus";
    }
    else if (pilih==10)
    {
        dataBuku="Panduan dan Manual";
    }
    else if (pilih==11)
    {
        dataBuku="Buku Pedoman";
    }
    else if (pilih==12)
    {
        dataBuku="Sejarah";
    }
    else if (pilih==13)
    {
        dataBuku="Jurnal";
    }
    else if (pilih==14)
    {
        dataBuku="Kritik Sastra";
    }
    else if (pilih==15)
    {
        dataBuku="Filsafat";
    }
    else if (pilih==16)
    {
        dataBuku="Fotografi";
    }
    else if (pilih==17)
    {
        dataBuku="Travelog";
    }
    else if (pilih==18)
    {
        dataBuku="Buku Ilmiah";
    }
    else if (pilih==19)
    {
        dataBuku="Sains Populer";
    }
    else if (pilih==20)
    {
        dataBuku="Esai";
    }
    return dataBuku;

}

string JenisFiksi(int pilih){
    if(pilih==1)
    {
        dataBuku="Romance";
    }
    else if (pilih==2)
    {
        dataBuku="Action Adventure";
    }
    else if (pilih==3)
    {
        dataBuku="Science Fiction";
    }
    else if (pilih==4)
    {
        dataBuku="Fantasy";
    }
    else if (pilih==5)
    {
        dataBuku="Speculative Fiction";
    }
    else if (pilih==6)
    {
        dataBuku="Suspense";
    }
    else if (pilih==7)
    {
        dataBuku="Young Adult";
    }
    else if (pilih==8)
    {
        dataBuku="New Adult";
    }
    else if (pilih==9)
    {
        dataBuku="Kamus";
    }
    else if (pilih==10)
    {
        dataBuku="Thriller";
    }
    else if (pilih==11)
    {
        dataBuku="Buku Pedoman";
    }
    else if (pilih==12)
    {
        dataBuku="Sejarah";
    }
    else if (pilih==13)
    {
        dataBuku="Jurnal";
    }
    else if (pilih==14)
    {
        dataBuku="Kritik Sastra";
    }
    else if (pilih==15)
    {
        dataBuku="Filsafat";
    }
    else if (pilih==16)
    {
        dataBuku="Historical";
    }
    else if (pilih==17)
    {
        dataBuku="Western";
    }
    else if (pilih==18)
    {
        dataBuku="Family Saga";
    }
    else if (pilih==19)
    {
        dataBuku="Women’s Fiction";
    }
    else if (pilih==20)
    {
        dataBuku="Magic Realism";
    }
    else if (pilih==21)
    {
        dataBuku="Literary Fiction";
    }
    return dataBuku;
}

int TahunTerbit(){
    bool eror;
    int thn_terbit;
    do{
        eror=false;
        cout<<"Tahun Terbit\t: ";
        cin>>dataBuku;
        try
        {
            thn_terbit=stoi(dataBuku);
        }
        catch(const std::exception& e)
        {
            eror=true;
        }
    } while (eror==true || (thn_terbit<1900 || thn_terbit>2020));
    return thn_terbit;
}

string InputPenerbit(){
    cin.get();
    cout<<"Penerbit\t: ";
    cin.getline(Masukkan, 100);
    dataBuku=Masukkan;
    return dataBuku;
}

int InputCetakan(){
    bool eror;
    int cetakan;
    do{
        eror=false;
        cout<<"Cetakan\t\t: ";
        cin.get(Masukkan, 3);
        dataBuku=Masukkan;
        try
        {
            cetakan=stoi(dataBuku);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    } while (eror==true);
    return cetakan; 
}

string InputKota(){
    cin.get();
    cout<<"Kota Terbit\t: ";
    cin.get(Masukkan, 100);
    dataBuku=Masukkan;
    return dataBuku;
}

// validasi
bool CekID(linked_list l, string id){
    bool ada=false;
    address a=l.mulai;
    int b;
    while (a!=NULL)
    {
        b=id.compare(a->info.id_buku);
        if (b==0)
        {
            ada=true;
            break;
        }
        a=a->next;
    }
    return ada;   
}
bool CekJudul(linked_list l, string judul){
    bool ada=false;
    address a=l.mulai;
    int b;
    while (a!=NULL)
    {
        b=judul.compare(a->info.judul);
        if (b==0)
        {
            ada=true;
            break;
        }
        a=a->next;
    }
    return ada;
}
