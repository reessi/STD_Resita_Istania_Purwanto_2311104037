#include <iostream>
#include <string>

using namespace std;

// Struktur Node untuk menyimpan data buku
struct Node {
    int idBuku;
    string judulBuku;
    string penulisBuku;
    Node* prev;
    Node* next;
};

// Fungsi untuk membuat Node baru
Node* createNode(int id, string judul, string penulis) {
    Node* newNode = new Node();
    newNode->idBuku = id;
    newNode->judulBuku = judul;
    newNode->penulisBuku = penulis;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan buku di akhir linked list
void addLast(Node*& head, Node*& tail, int id, string judul, string penulis) {
    Node* newNode = createNode(id, judul, penulis);
    if (tail == nullptr) { // Jika list masih kosong
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    cout << "Buku berhasil ditambahkan: " << judul << endl;
}

// Fungsi untuk menampilkan daftar buku dari awal ke akhir
void displayFromStart(Node* head) {
    if (head == nullptr) {
        cout << "Daftar buku kosong." << endl;
        return;
    }
    Node* current = head;
    cout << "Daftar Buku (dari awal ke akhir):" << endl;
    while (current != nullptr) {
        cout << "ID Buku: " << current->idBuku << ", Judul: " << current->judulBuku 
             << ", Penulis: " << current->penulisBuku << endl;
        current = current->next;
    }
}

// Fungsi untuk menampilkan daftar buku dari akhir ke awal
void displayFromEnd(Node* tail) {
    if (tail == nullptr) {
        cout << "Daftar buku kosong." << endl;
        return;
    }
    Node* current = tail;
    cout << "Daftar Buku (dari akhir ke awal):" << endl;
    while (current != nullptr) {
        cout << "ID Buku: " << current->idBuku << ", Judul: " << current->judulBuku 
             << ", Penulis: " << current->penulisBuku << endl;
        current = current->prev;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int choice, id;
    string judul, penulis;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Buku di Akhir\n";
        cout << "2. Tampilkan Buku dari Awal ke Akhir\n";
        cout << "3. Tampilkan Buku dari Akhir ke Awal\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan ID Buku: ";
                cin >> id;
                cin.ignore(); // Membersihkan buffer
                cout << "Masukkan Judul Buku: ";
                getline(cin, judul);
                cout << "Masukkan Penulis Buku: ";
                getline(cin, penulis);
                addLast(head, tail, id, judul, penulis);
                break;
            case 2:
                displayFromStart(head);
                break;
            case 3:
                displayFromEnd(tail);
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 4);

    return 0;
}
