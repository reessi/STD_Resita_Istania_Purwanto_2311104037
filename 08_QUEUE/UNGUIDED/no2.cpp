#include <iostream>
#include <limits>
#include "no1.cpp"

using namespace std;

int main() {
    Queue q;
    string nama, nim;
    int pilihan;

    do {
        cout << "\nMenu Antrian Mahasiswa:" << endl;
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Hapus Antrian" << endl;
        cout << "3. Lihat Antrian" << endl;
        cout << "4. Hitung Jumlah Antrian" << endl;
        cout << "5. Kosongkan Antrian" << endl;
        cout << "6. Keluar" << endl;

        cout << "Pilih menu: ";
        cin >> pilihan;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input tidak valid! Silakan pilih angka yang benar." << endl;
            continue;
        }

        cin.ignore();  // Menghapus newline setelah memilih menu

        switch (pilihan) {
        case 1:
            cout << "Masukkan Nama Mahasiswa: ";
            getline(cin, nama);
            cout << "Masukkan NIM Mahasiswa: ";
            getline(cin, nim);
            q.enqueue(nama, nim);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.viewQueue();
            break;
        case 4:
            cout << "Jumlah antrian: " << q.countQueue() << endl;
            break;
        case 5:
            q.clearQueue();
            break;
        case 6:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Silakan pilih angka yang valid." << endl;
        }

    } while (pilihan != 6);

    return 0;
}
