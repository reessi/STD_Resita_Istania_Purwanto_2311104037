#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    // Fungsi untuk menambahkan elemen di akhir list
    void insertLast(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode; // Jika list kosong, node baru menjadi head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; // Mencari akhir list
            }
            temp->next = newNode;
            newNode->prev = temp; // Hubungkan node baru dengan node terakhir
        }
    }

    // Fungsi untuk menghapus elemen pertama dalam list
    void deleteFirst() {
        if (head == nullptr) {
            std::cout << "List kosong, tidak ada elemen yang bisa dihapus." << std::endl;
            return;
        }
        Node* temp = head;
        if (head->next == nullptr) {
            head = nullptr; // Jika hanya ada satu elemen
        } else {
            head = head->next;
            head->prev = nullptr; // Hapus referensi ke node lama
        }
        delete temp; // Hapus node pertama
    }

    // Fungsi untuk menghapus elemen terakhir dalam list
    void deleteLast() {
        if (head == nullptr) {
            std::cout << "List kosong, tidak ada elemen yang bisa dihapus." << std::endl;
            return;
        }
        Node* temp = head;
        if (head->next == nullptr) {
            head = nullptr; // Jika hanya ada satu elemen
        } else {
            while (temp->next != nullptr) {
                temp = temp->next; // Mencari node terakhir
            }
            temp->prev->next = nullptr; // Putuskan hubungan node terakhir
        }
        delete temp; // Hapus node terakhir
    }

    // Fungsi untuk menampilkan seluruh elemen dalam list
    void display() {
        if (head == nullptr) {
            std::cout << "List kosong." << std::endl;
            return;
        }
        Node* temp = head;
        std::cout << "DAFTAR ANGGOTA LIST: ";
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->next != nullptr) {
                std::cout << " <-> ";
            }
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;

    int firstElement, secondElement, thirdElement;

    // Input elemen pertama
    std::cout << "Masukkan elemen pertama = ";
    std::cin >> firstElement;
    dll.insertLast(firstElement);

    // Input elemen kedua di akhir
    std::cout << "Masukkan elemen kedua di akhir = ";
    std::cin >> secondElement;
    dll.insertLast(secondElement);

    // Input elemen ketiga di akhir
    std::cout << "Masukkan elemen ketiga di akhir = ";
    std::cin >> thirdElement;
    dll.insertLast(thirdElement);

    // Tampilkan list setelah penambahan elemen
    dll.display();

    // Hapus elemen pertama dan terakhir
    dll.deleteFirst();
    dll.deleteLast();

    // Tampilkan list setelah penghapusan
    std::cout << "DAFTAR ANGGOTA LIST SETELAH PENGHAPUSAN: ";
    dll.display();

    return 0;
}
