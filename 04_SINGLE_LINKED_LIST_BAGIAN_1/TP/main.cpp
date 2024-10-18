#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List L;
    createList(L);

    int nimDigit;
    cout << "Masukkan NIM per digit\n";
    for (int i = 1; i <= 10; i++) {
        cout << "Digit " << i << " : ";
        cin >> nimDigit;
        address P = allocate(nimDigit);
        insertLast(L, P);  // Menggunakan insertLast agar urutan sesuai input
    }

    cout << "Isi list : ";
    printInfo(L);

    return 0;
}
