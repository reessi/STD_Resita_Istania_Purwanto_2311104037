#include <iostream>
#include "mahasiswa.h"  // Menggunakan header yang benar

using namespace std;

int main() {
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata-rata = " << rata2(mhs);
    return 0;
}
