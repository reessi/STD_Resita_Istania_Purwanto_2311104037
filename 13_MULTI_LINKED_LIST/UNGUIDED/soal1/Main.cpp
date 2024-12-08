#include <iostream>
#include <string>
using namespace std;

struct Proyek {
    string namaProyek;
    int durasi;
    Proyek* nextProyek;
};

struct Pegawai {
    string namaPegawai;
    string idPegawai;
    Proyek* proyek;
    Pegawai* nextPegawai;
};

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

int main() {
    Pegawai* head = nullptr;
    Pegawai* andi = buatPegawai("Andi", "P001");
    Pegawai* budi = buatPegawai("Budi", "P002");
    Pegawai* citra = buatPegawai("Citra", "P003");

    head = andi;
    andi->nextPegawai = budi;
    budi->nextPegawai = citra;

    
    tambahProyek(andi, "Aplikasi Mobile", 12);
    tambahProyek(budi, "Sistem Akuntansi", 8);
    tambahProyek(citra, "E-commerce", 10);

   
    tambahProyek(andi, "Analisis Data", 6);

    
    hapusProyek(andi, "Aplikasi Mobile");

    tampilkanPegawai(head);

    return 0;
}
