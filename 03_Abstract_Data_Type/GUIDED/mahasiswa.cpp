#include <iostream>
#include "mahasiswa.h"  // Menggunakan header yang benar

using namespace std;

void inputMhs(mahasiswa &m) { 
    cout << "input nim = "; 
    cin >> m.nim;
    cout << "input nilai1 = ";
    cin >> m.nilai1;
    cout << "input nilai2 = ";
    cin >> m.nilai2;
}

float rata2(mahasiswa m) { 
    return (m.nilai1 + m.nilai2) / 2.0;  // Menggunakan 2.0 untuk hasil float
}
