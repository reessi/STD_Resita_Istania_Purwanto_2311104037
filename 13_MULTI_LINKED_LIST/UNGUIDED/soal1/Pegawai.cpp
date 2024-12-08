#include "Pegawai.h"
#include <iostream>
using namespace std;


Pegawai* buatPegawai(string nama, string id) {
    Pegawai* pegawai = new Pegawai;
    pegawai->namaPegawai = nama;
    pegawai->idPegawai = id;
    pegawai->proyek = nullptr;
    pegawai->nextPegawai = nullptr;
    return pegawai;
}


void tambahProyek(Pegawai* pegawai, string namaProyek, int durasi) {
    Proyek* proyek = new Proyek;
    proyek->namaProyek = namaProyek;
    proyek->durasi = durasi;
    proyek->nextProyek = pegawai->proyek;
    pegawai->proyek = proyek;
}


void hapusProyek(Pegawai* pegawai, string namaProyek) {
    Proyek* proyek = pegawai->proyek;
    Proyek* prev = nullptr;

    while (proyek != nullptr && proyek->namaProyek != namaProyek) {
        prev = proyek;
        proyek = proyek->nextProyek;
    }

    if (proyek != nullptr) {
        if (prev == nullptr) {
            pegawai->proyek = proyek->nextProyek;
        } else {
            prev->nextProyek = proyek->nextProyek;
        }
        delete proyek;
    }
}


void tampilkanPegawai(Pegawai* head) {
    Pegawai* pegawai = head;
    while (pegawai != nullptr) {
        cout << "Nama Pegawai: " << pegawai->namaPegawai << ", ID: " << pegawai->idPegawai << endl;
        Proyek* proyek = pegawai->proyek;
        while (proyek != nullptr) {
            cout << "  - Proyek: " << proyek->namaProyek << ", Durasi: " << proyek->durasi << " bulan" << endl;
            proyek = proyek->nextProyek;
        }
        pegawai = pegawai->nextPegawai;
    }
}
