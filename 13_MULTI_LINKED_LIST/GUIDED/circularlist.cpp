#include <iostream>
#include "circularlist.h"

using namespace std;

void createList(List &L) {
    L.first = nullptr;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != nullptr) {
        P->info = x;
        P->next = nullptr;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
}

void insertFirst(List &L, address P) {
    if (L.first == nullptr) {
        L.first = P;
        P->next = P;
    } else {
        address last = L.first;
        while (last->next != L.first) {
            last = last->next;
        }
        last->next = P;
        P->next = L.first;
        L.first = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    P->next = Prec->next;
    Prec->next = P;
}

void insertLast(List &L, address P) {
    if (L.first == nullptr) {
        L.first = P;
        P->next = P;
    } else {
        address last = L.first;
        while (last->next != L.first) {
            last = last->next;
        }
        last->next = P;
        P->next = L.first;
    }
}

void deleteFirst(List &L, address &P) {
    P = L.first;
    if (P != nullptr) {
        if (P->next == L.first) {
            L.first = nullptr;
        } else {
            address last = L.first;
            while (last->next != L.first) {
                last = last->next;
            }
            L.first = P->next;
            last->next = L.first;
        }
        P->next = nullptr;
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    P = Prec->next;
    if (P != nullptr) {
        Prec->next = P->next;
        P->next = nullptr;
    }
}

void deleteLast(List &L, address &P) {
    if (L.first != nullptr) {
        address last = L.first;
        while (last->next->next != L.first) {
            last = last->next;
        }
        P = last->next;
        last->next = L.first;
        P->next = nullptr;
    }
}

address findElm(List L, infotype x) {
    address P = L.first;
    if (P != nullptr) {
        do {
            if (P->info.nim == x.nim) {
                return P;
            }
            P = P->next;
        } while (P != L.first);
    }
    return nullptr;
}

void printInfo(List L) {
    address P = L.first;
    if (P != nullptr) {
        do {
            cout << "Nana: " << P->info.nama << endl;
            cout << "NIM : " << P->info.nim << endl;
            cout << "L/P : " << P->info.jenis_kelamin << endl;
            cout << "IPK : " << P->info.ipk << endl << endl;
            P = P->next;
        } while (P != L.first);
    }
}

address createData(string nama, string nim, char jenis_kelamin, float ipk) {
    infotype x = {nama, nim, jenis_kelamin, ipk};
    return alokasi(x);
}
