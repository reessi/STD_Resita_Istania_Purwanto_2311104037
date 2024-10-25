#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int NIM;
    string nama;
    Mahasiswa* next;
};

Mahasiswa* head = nullptr;

// Fungsi untuk menambahkan mahasiswa ke dalam list
void tambahMahasiswa(int nim, string nama) {
    Mahasiswa* baru = new Mahasiswa();
    baru->NIM = nim;
    baru->nama = nama;
    baru->next = head;
    head = baru;
    cout << "Mahasiswa dengan NIM " << nim << " berhasil ditambahkan." << endl;
}

// Fungsi untuk mencari mahasiswa berdasarkan NIM
void cariMahasiswa(int nim) {
    Mahasiswa* current = head;
    while (current != nullptr) {
        if (current->NIM == nim) {
            cout << "Mahasiswa ditemukan: " << current->nama << endl;
            return;
        }
        current = current->next;
    }
    cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
}

int main() {
    int pilihan, nim;
    string nama;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Cari Mahasiswa\n";
        cout << "3. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> nim;
                cin.ignore();  // Membersihkan buffer
                cout << "Masukkan Nama: ";
                getline(cin, nama);
                tambahMahasiswa(nim, nama);
                break;
            case 2:
                cout << "Masukkan NIM yang dicari: ";
                cin >> nim;
                cariMahasiswa(nim);
                break;
            case 3:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 3);
    
    return 0;
}

