#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    Mahasiswa* next;  // Penunjuk ke mahasiswa berikutnya
};

class Queue {
protected:
    Mahasiswa* front;
    Mahasiswa* back;

public:
    Queue() : front(nullptr), back(nullptr) {}

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(string nama, string nim) {
        Mahasiswa* newMahasiswa = new Mahasiswa;
        newMahasiswa->nama = nama;
        newMahasiswa->nim = nim;
        newMahasiswa->next = nullptr;

        // Jika antrian kosong, masukkan mahasiswa baru
        if (isEmpty()) {
            front = back = newMahasiswa;
        } else {
            back->next = newMahasiswa;
            back = newMahasiswa;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
        } else {
            Mahasiswa* temp = front;
            front = front->next;
            delete temp;
        }
    }

    void viewQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
        } else {
            Mahasiswa* temp = front;
            int i = 1;
            while (temp != nullptr) {
                cout << i++ << ". " << temp->nama << " - " << temp->nim << endl;
                temp = temp->next;
            }
        }
    }

    int countQueue() {
        int count = 0;
        Mahasiswa* temp = front;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void clearQueue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};
