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

    // Fungsi untuk menambahkan elemen di awal list
    void insertFirst(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode; // Jika list kosong, node baru menjadi head
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode; // Update head ke node baru
        }
    }

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

    // Fungsi untuk menampilkan seluruh elemen dalam list
    void display() {
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
    dll.insertFirst(firstElement);

    // Input elemen kedua di awal
    std::cout << "Masukkan elemen kedua di awal = ";
    std::cin >> secondElement;
    dll.insertFirst(secondElement);

    // Input elemen ketiga di akhir
    std::cout << "Masukkan elemen ketiga di akhir = ";
    std::cin >> thirdElement;
    dll.insertLast(thirdElement);

    // Tampilkan seluruh elemen
    dll.display();

    return 0;
}
