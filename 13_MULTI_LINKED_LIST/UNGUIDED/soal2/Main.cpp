#include <iostream>
#include "Anggota.h"
using namespace std;

int main() {
    // Membuat anggota
    Anggota* head = nullptr;
    Anggota* rani = buatAnggota("Rani", "A001");
    Anggota* dito = buatAnggota("Dito", "A002");
    Anggota* vina = buatAnggota("Vina", "A003");

    head = rani;
    rani->nextAnggota = dito;
    dito->nextAnggota = vina;

    tambahBuku(rani, "Pemrograman C++", "01/12/2024");
    tambahBuku(dito, "Algoritma Pemrograman", "15/12/2024");

    tambahBuku(rani, "Struktur Data", "10/12/2024");

    hapusAnggota(head, "A002");

    tampilkanAnggota(head);

    return 0;
}
