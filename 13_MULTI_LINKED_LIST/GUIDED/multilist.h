#ifndef MULTILIST_H
#define MULTILIST_H

#include "circularlist.h"  // Memanfaatkan struktur circularlist
#include <iostream>
#include <string>

using namespace std;

// Struktur untuk multi list
struct Child {
    string nama;  // Nama entitas child
    Child* next;
};

struct Parent {
    string nama;  // Nama entitas parent
    Parent* next;
    Child* firstChild;  // Pointer ke anak pertama
};

// Operasi pada parent dan child
void createParent(Parent* &P, string nama);
void createChild(Child* &C, string nama);
void insertChild(Parent* &P, Child* C);
void printMultiList(Parent* P);

#endif
