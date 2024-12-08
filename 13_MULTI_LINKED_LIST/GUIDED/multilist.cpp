#include "multilist.h"

void createParent(Parent* &P, string nama) {
    P = new Parent;
    P->nama = nama;
    P->next = nullptr;
    P->firstChild = nullptr;
}

void createChild(Child* &C, string nama) {
    C = new Child;
    C->nama = nama;
    C->next = nullptr;
}

void insertChild(Parent* &P, Child* C) {
    if (P->firstChild == nullptr) {
        P->firstChild = C;
    } else {
        Child* temp = P->firstChild;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = C;
    }
}

void printMultiList(Parent* P) {
    while (P != nullptr) {
        cout << "Parent: " << P->nama << endl;

        Child* C = P->firstChild;
        while (C != nullptr) {
            cout << "  Child: " << C->nama << endl;
            C = C->next;
        }

        P = P->next;
    }
}

