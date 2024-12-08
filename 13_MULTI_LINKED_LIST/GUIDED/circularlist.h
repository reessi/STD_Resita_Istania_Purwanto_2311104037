#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    char jenis_kelamin;
    float ipk;
};

typedef mahasiswa infotype;

struct ElmList {
    infotype info;
    ElmList *next;
};

typedef ElmList* address;
typedef struct {
    address first;
} List;

// Fungsi dan prosedur untuk Circular List
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
address findElm(List L, infotype x);
void printInfo(List L);
address createData(string nama, string nim, char jenis_kelamin, float ipk);

#endif // CIRCULARLIST_H
