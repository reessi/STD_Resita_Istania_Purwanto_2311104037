#ifndef PEGAWAI_H
#define PEGAWAI_H

#include <string>
using namespace std;

// Struktur untuk Proyek
struct Proyek {
    string namaProyek;
    int durasi;
    Proyek* nextProyek;
};

// Struktur untuk Pegawai
struct Pegawai {
    string namaPegawai;
    string idPegawai;
    Proyek* proyek;
    Pegawai* nextPegawai;
};

// Fungsi untuk membuat pegawai baru
Pegawai* buatPegawai(string nama, string id);

// Fungsi untuk menambahkan proyek ke pegawai
void tambahProyek(Pegawai* pegawai, string namaProyek, int durasi);

// Fungsi untuk menghapus proyek dari pegawai
void hapusProyek(Pegawai* pegawai, string namaProyek);

// Fungsi untuk menampilkan data pegawai dan proyek mereka
void tampilkanPegawai(Pegawai* head);

#endif
