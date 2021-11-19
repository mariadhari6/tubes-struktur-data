#include "library.h"

address Alokasi(string Judul, string ID_Buku, string Kode_rak,
                int Thn_terbit, int Cetakan_ke,
                string Penulis, string Penerbit, string Kota_terbit,
                string Jenis_Buku, string Genre[], int i){
    
    address a=new elemen;
    a->info.id_buku=ID_Buku;
    a->info.judul=Judul;
    a->info.kode_rak=Kode_rak;
    a->info.thn_terbit=Thn_terbit;
    a->info.cetakan_ke=Cetakan_ke;
    a->info.penulis=Penulis;
    a->info.penerbit=Penerbit;
    a->info.kota_terbit=Kota_terbit;
    a->info.jenis_buku=Jenis_Buku;
    for(int b=0; b<i+1; b++){
        a->info.genre[b]=Genre[b];
    }
    a->info.jml_genre=i+1;
    a->next=NULL;
    return a;
}

linked_list Tambah_Awal(linked_list l, address data_list){
    if (l.mulai==NULL)
    {
        l.mulai=data_list;
        return l;
    }
    else
    {
        data_list->next=l.mulai;
        l.mulai=data_list;
        data_list=NULL;
        return l;
    }
}

linked_list Tambah_Akhir(linked_list l, address data_list){
    address a=l.mulai;
    while (a->next!=NULL)
    {
        a=a->next;
    }
    a->next=data_list;
    data_list=NULL;
    return l;
}

linked_list Delete_Buku(linked_list l, string Judul){
    if (l.mulai==NULL)
    {
        cout<<"Data Perpustakaan Masih Kosong !!!\n";
        return l;
    }
    address wadah;
    if (l.mulai->info.judul.compare(Judul)==0)
    {
        wadah=l.mulai;
        l.mulai=l.mulai->next;
        return l;
    }
    address a=l.mulai;
    while (a->next!=NULL)
    {
        if (a->next->info.judul.compare(Judul)==0)
        {
            wadah=a->next;
            a->next=wadah->next;
            return l;
        }
        a=a->next;
    }
}

void Tampilkan_Data(linked_list l){
    if (l.mulai==NULL)
    {
        cout<<"Data Buku Kosong !!!\n";
        return;
    }
    address a=l.mulai;
    int x=1;
    while (a!=NULL)
    {
        cout<<"=====Data Buku Ke-"<<x<<"=====\n";
        cout<<"ID Buku\t= "<<a->info.id_buku<<endl;
        cout<<"Judul\t= "<<a->info.judul<<endl;
        cout<<"Kode Rak= "<<a->info.kode_rak<<endl;
        cout<<"Penulis\t= "<<a->info.penulis<<endl;
        cout<<"Jenis\t= "<<a->info.jenis_buku<<endl;
        cout<<"Genre\t= 1. "<<a->info.genre[0]<<endl;
        for (int i = 1; i < a->info.jml_genre; i++)
        {
            cout<<"\t  "<<i+1<<". "<<a->info.genre[i]<<endl;
        }
        cout<<"Penerbit= "<<a->info.penerbit<<endl;
        cout<<"Tahun\t= "<<a->info.thn_terbit<<endl;
        cout<<"Kota\t= "<<a->info.kota_terbit<<endl;
        cout<<"Penulis\t= "<<a->info.penulis<<endl;
        cout<<"Cetakan\t= "<<a->info.cetakan_ke<<endl;
        x++;
        a=a->next;
    }  
}

void Cari_Buku(linked_list l, string Judul){
    system("clear");
    address a=l.mulai;
    while (a!=NULL)
    {
        if (a->info.judul.compare(Judul)==0)
        {
            cout<<"=====Data Buku"<<"=====\n";
            cout<<"ID Buku\t= "<<a->info.id_buku<<endl;
            cout<<"Judul\t= "<<a->info.judul<<endl;
            cout<<"Kode Rak= "<<a->info.kode_rak<<endl;
            cout<<"Penulis\t= "<<a->info.penulis<<endl;
            cout<<"Jenis\t= "<<a->info.jenis_buku<<endl;
            cout<<"Genre\t= 1. "<<a->info.genre[0]<<endl;
            for (int i = 1; i < a->info.jml_genre; i++)
            {
                cout<<"\t  "<<i+1<<". "<<a->info.genre[i]<<endl;
            }
            cout<<"Penerbit= "<<a->info.penerbit<<endl;
            cout<<"Tahun\t= "<<a->info.thn_terbit<<endl;
            cout<<"Kota\t= "<<a->info.kota_terbit<<endl;
            cout<<"Penulis\t= "<<a->info.penulis<<endl;
            cout<<"Cetakan\t= "<<a->info.cetakan_ke<<endl;
            return;
        }
    }
}

void Hitung_Buku(linked_list l){
    int jml=0;
    address a=l.mulai;
    while (a!=NULL)
    {
        a=a->next;
        jml++;
    }
    cout<<"Jumlah Buku Di Perpustakaan : "<<jml<<endl;
}

linked_list Tambah_Setelah(linked_list l, address data_list, string judul_tujuan){
    if (l.mulai!=NULL)
    {
        address a=l.mulai;
        while (a!=NULL)
        {
            if (a->info.judul.compare(judul_tujuan)==0)
            {
                data_list->next=a->next;
                a->next=data_list;
                return l;
            }
            a=a->next;
        }   
    }
}

linked_list Update_Data(linked_list l, address data_list, string id_tujuan, int i){
    address a=l.mulai;
    while (a!=NULL)
    {
        if (a->info.id_buku.compare(id_tujuan)==0)
        {
            a->info.judul=data_list->info.judul;
            a->info.kode_rak=data_list->info.kode_rak;
            a->info.thn_terbit=data_list->info.thn_terbit;
            a->info.cetakan_ke=data_list->info.cetakan_ke;
            a->info.penulis=data_list->info.penulis;
            a->info.penerbit=data_list->info.penerbit;
            a->info.kota_terbit=data_list->info.kota_terbit;
            a->info.jenis_buku=data_list->info.jenis_buku;
            for(int b=0; b<i+1; b++){
                a->info.genre[b]=data_list->info.genre[b];
            }
            a->info.jml_genre=i+1;
            return l;
        }
        a=a->next;
    }
    
}