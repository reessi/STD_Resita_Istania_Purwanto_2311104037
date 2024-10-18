#include <iostream>
#include "list.h"
using namespace std;

void createList(List &L) {
    first(L) = NULL;
}

address allocate(infotype x) {
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List &L, address P) {
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        address Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertAfter(address Prec, address P) {
    if (Prec != NULL) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteLast(List &L, address &P) {
    if (first(L) == NULL) {
        P = NULL;
    } else if (next(first(L)) == NULL) {
        P = first(L);
        first(L) = NULL;
    } else {
        address Q = first(L);
        while (next(next(Q)) != NULL) {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = NULL;
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec != NULL && next(Prec) != NULL) {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
}

address searchInfo(List L, infotype x) {
    address P = first(L);
    while (P != NULL && info(P) != x) {
        P = next(P);
    }
    return P;
}

void printInfo(List L) {
    address P = first(L);
    while (P != NULL) {
        cout << info(P);
        P = next(P);
    }
    cout << endl;
}
