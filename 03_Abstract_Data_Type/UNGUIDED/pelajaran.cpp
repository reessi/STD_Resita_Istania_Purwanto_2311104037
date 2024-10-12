#include "pelajaran.h"
#include <iostream>

pelajaran create_pelajaran(std::string nama, std::string kode) {
    pelajaran pel;
    pel.namaMapel = nama;
    pel.kodeMapel = kode;
    return pel;
}

void tampil_pelajaran(const pelajaran& pel) {
    std::cout << "nama pelajaran : " << pel.namaMapel << std::endl;
    std::cout << "nilai : " << pel.kodeMapel << std::endl;
}
