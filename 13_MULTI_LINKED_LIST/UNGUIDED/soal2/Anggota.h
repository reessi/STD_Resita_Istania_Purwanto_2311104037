#ifndef ANGOTA_H
#define ANGOTA_H

#include <string>
using namespace std;

struct Buku {
    string judulBuku;
    string tanggalPengembalian;
    Buku* nextBuku;
};

struct Anggota {
    string namaAnggota;
    string idAnggota;
    Buku* buku;
    Anggota* nextAnggota;
};

Anggota* buatAnggota(string nama, string id);

void tambahBuku(Anggota* anggota, string judulBuku, string tanggalPengembalian);

void hapusAnggota(Anggota*& head, string idAnggota);

void tampilkanAnggota(Anggota* head);

#endif
