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

    // Fungsi untuk menampilkan elemen dari depan ke belakang
    void displayForward() {
        if (head == nullptr) {
            std::cout << "List kosong." << std::endl;
            return;
        }
        Node* temp = head;
        std::cout << "Daftar elemen dari depan ke belakang: ";
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->next != nullptr) {
                std::cout << " <-> ";
            }
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    // Fungsi untuk menampilkan elemen dari belakang ke depan
    void displayBackward() {
        if (head == nullptr) {
            std::cout << "List kosong." << std::endl;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; // Mencari node terakhir
        }
        std::cout << "Daftar elemen dari belakang ke depan: ";
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->prev != nullptr) {
                std::cout << " <-> ";
            }
            temp = temp->prev;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;

    int element;

    // Input 4 elemen ke dalam list
    for (int i = 1; i <= 4; i++) {
        std::cout << "Masukkan elemen ke-" << i << ": ";
        std::cin >> element;
        dll.insertLast(element);
    }

    // Tampilkan elemen dari depan ke belakang
    dll.displayForward();

    // Tampilkan elemen dari belakang ke depan
    dll.displayBackward();

    return 0;
}
