// Database Perpustakaan
#include<iostream>
#include<curses.h>
#include<string>

#if !defined LIBRARY_LINKED_LIST
#define LIBRARY_LINKED_LIST

using namespace std;
typedef struct elemen *address;
struct buku
{
    string judul, id_buku, kode_rak;
    int thn_terbit, cetakan_ke;
    string penulis, penerbit, kota_terbit, jenis_buku;
    int jml_genre;
    string genre[10];
};
struct elemen
{
    buku info;
    address next;
};
struct linked_list
{
    address mulai;
};
string dataBuku;
char Masukkan[100];
string m;
void Buat_data(linked_list Data);
string InputIDBuku();
string InputJudul();
string InputPenulis();
string InputKodeRak();
string InputJenisBuku();
string InputGenre(string jns_buku);
string JenisFiksi(int pilih);
string JenisNonFiksi(int pilih);
int TahunTerbit();
string InputPenerbit();
int InputCetakan();
string InputKota();
bool CekID(linked_list l, string id);
bool CekJudul(linked_list l, string judul);
int Pilihan();
address Alokasi(string Judul, string ID_Buku, string Kode_rak,
                int Thn_terbit, int Cetakan_ke,
                string Penulis, string Penerbit, string Kota_terbit,
                string Jenis_Buku, string Genre[], int i);
linked_list Tambah_Awal(linked_list l, address data_list);
linked_list Tambah_Akhir(linked_list l, address data_list);
linked_list Tambah_Setelah(linked_list l, address data_list, string judul_tujuan);
linked_list Delete_Buku(linked_list l, string Judul);
linked_list Update_Data(linked_list l, address data_list, string id_tujuan, int i);
void Tampilkan_Data(linked_list l);
void Cari_Buku(linked_list l, string Judul);
void Hitung_Buku(linked_list l);
#endif