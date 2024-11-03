#include "stack.h"
#include <iostream>

void testStack(char data[], int size) {
    stack S;
    createStack(S); // Membuat stack baru

    for (int i = 0; i < size; i++) {
        push(S, data[i]); // Menambahkan elemen ke stack
    }

    std::cout << "Isi stack awal: ";
    printInfo(S); // Menampilkan isi stack awal

    // Pop beberapa elemen (disesuaikan dengan data)
    for (int i = 0; i < size / 2; i++) { // Misal kita pop setengah dari ukuran
        pop(S);
    }

    std::cout << "Isi stack sesudah pop: ";
    printInfo(S); // Menampilkan isi stack setelah pop
}

int main() {
    // Digit terakhir NIM MOD 4 sisa 0
    char data0[] = {'A', 'Y', 'A', 'J', 'B', 'A', 'L', 'F', 'I'}; // Ubah sesuai kebutuhan
    std::cout << "Digit terakhir NIM MOD 4 sisa 0:" << std::endl;
    testStack(data0, 9); // Menjalankan pengujian untuk data0

    // Digit terakhir NIM MOD 4 sisa 1
    char data1[] = {'G', 'N', 'U', 'D', 'N', 'A', 'B', 'O', 'L', 'A', 'H'};
    std::cout << "Digit terakhir NIM MOD 4 sisa 1:" << std::endl;
    testStack(data1, 11); // Menjalankan pengujian untuk data1

    // Digit terakhir NIM MOD 4 sisa 2
    char data2[] = {'I', 'R', 'I', 'D', 'A', 'Y', 'A', 'C', 'R', 'E', 'P'};
    std::cout << "Digit terakhir NIM MOD 4 sisa 2:" << std::endl;
    testStack(data2, 11); // Menjalankan pengujian untuk data2

    // Digit terakhir NIM MOD 4 sisa 3
    char data3[] = {'A', 'T', 'A', 'D', 'R', 'U', 'T', 'K', 'U', 'R', 'T', 'S'};
    std::cout << "Digit terakhir NIM MOD 4 sisa 3:" << std::endl;
    testStack(data3, 12); // Menjalankan pengujian untuk data3

    return 0;
}
