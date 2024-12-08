#include "Anggota.h"
#include <iostream>
using namespace std;
Anggota* buatAnggota(string nama, string id) {
    Anggota* anggota = new Anggota;
    anggota->namaAnggota = nama;
    anggota->idAnggota = id;
    anggota->buku = nullptr;
    anggota->nextAnggota = nullptr;
    return anggota;
}

void tambahBuku(Anggota* anggota, string judulBuku, string tanggalPengembalian) {
    Buku* buku = new Buku;
    buku->judulBuku = judulBuku;
    buku->tanggalPengembalian = tanggalPengembalian;
    buku->nextBuku = anggota->buku;
    anggota->buku = buku;
}

void hapusAnggota(Anggota*& head, string idAnggota) {
    Anggota* anggota = head;
    Anggota* prev = nullptr;

    while (anggota != nullptr && anggota->idAnggota != idAnggota) {
        prev = anggota;
        anggota = anggota->nextAnggota;
    }

    if (anggota != nullptr) {
        if (prev == nullptr) {
            head = anggota->nextAnggota;
        } else {
            prev->nextAnggota = anggota->nextAnggota;
        }

        Buku* buku = anggota->buku;
        while (buku != nullptr) {
            Buku* temp = buku;
            buku = buku->nextBuku;
            delete temp;
        }

        delete anggota;
    }
}
void tampilkanAnggota(Anggota* head) {
    Anggota* anggota = head;
    while (anggota != nullptr) {
        cout << "Nama Anggota: " << anggota->namaAnggota << ", ID: " << anggota->idAnggota << endl;
        Buku* buku = anggota->buku;
        while (buku != nullptr) {
            cout << "  - Buku: " << buku->judulBuku << ", Tanggal Pengembalian: " << buku->tanggalPengembalian << endl;
            buku = buku->nextBuku;
        }
        anggota = anggota->nextAnggota;
    }
}
