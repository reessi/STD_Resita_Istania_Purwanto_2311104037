#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>

struct pelajaran {
    std::string namaMapel;
    std::string kodeMapel;
};

pelajaran create_pelajaran(std::string nama, std::string kode);
void tampil_pelajaran(const pelajaran& pel);

#endif
