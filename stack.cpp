#include "stack.h"
#include <iostream>

void createStack(stack &S) {
    S.Top = 0; // Inisialisasi stack kosong
}

bool isEmpty(stack S) {
    return S.Top == 0; // Memeriksa apakah stack kosong
}

bool isFull(stack S) {
    return S.Top == 15; // Memeriksa apakah stack penuh
}

void push(stack &S, infotype x) {
    if (!isFull(S)) {
        S.info[S.Top] = x; // Masukkan elemen pada posisi Top
        S.Top++; // Naikkan Top
    } else {
        std::cout << "Stack penuh!" << std::endl; // Penanganan stack penuh
    }
}

infotype pop(stack &S) {
    if (!isEmpty(S)) {
        S.Top--; // Turunkan Top
        return S.info[S.Top]; // Kembalikan elemen yang di-pop
    }
    std::cout << "Stack kosong!" << std::endl; // Penanganan stack kosong
    return '\0'; // Kembali karakter null jika stack kosong
}

void printInfo(stack S) {
    for (int i = S.Top - 1; i >= 0; i--) {
        std::cout << S.info[i] << " "; // Cetak dari Top ke 0
    }
    std::cout << std::endl;
}
