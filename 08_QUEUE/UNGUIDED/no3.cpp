#include <iostream>
#include <limits>
#include "no1.cpp"

using namespace std;

class QueueWithPriority : public Queue {
public:
    void enqueueWithPriority(string nama, string nim) {
        Mahasiswa* newMahasiswa = new Mahasiswa;
        newMahasiswa->nama = nama;
        newMahasiswa->nim = nim;
        newMahasiswa->next = nullptr;

        // Jika antrian kosong, masukkan mahasiswa baru
        if (isEmpty()) {
            front = back = newMahasiswa;
        } else {
            // Jika NIM baru lebih kecil dari NIM pertama, masukkan di depan
            if (nim < front->nim) {
                newMahasiswa->next = front;
                front = newMahasiswa;
            } else {
                // Cari posisi yang tepat untuk mahasiswa baru berdasarkan NIM
                Mahasiswa* temp = front;
                while (temp->next != nullptr && temp->next->nim < nim) {
                    temp = temp->next;
                }
                newMahasiswa->next = temp->next;
                temp->next = newMahasiswa;

                // Jika mahasiswa baru ditambahkan di akhir, update 'back'
                if (temp->next == nullptr) {
                    back = newMahasiswa;
                }
            }
        }
    }
};

int main() {
    QueueWithPriority q;
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
            q.enqueueWithPriority(nama, nim);  // Menambah mahasiswa dengan prioritas
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
