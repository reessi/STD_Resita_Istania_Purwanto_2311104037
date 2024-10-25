#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertSorted(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == nullptr || head->data >= newNode->data) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && current->next->data < newNode->data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int values[4];

    // Memasukkan 4 elemen ke dalam list secara terurut2
    cout << "Masukkan 4 elemen integer secara terurut: ";
    for (int i = 0; i < 4; i++) {
        cin >> values[i];
        insertSorted(head, values[i]);
    }

    // Menampilkan list sebelum penambahan elemen baru
    cout << "List sebelum penambahan: ";
    printList(head);

    // Memasukkan elemen baru yang harus tetap terurut
    int newValue;
    cout << "Masukkan elemen baru yang ingin ditambahkan: ";
    cin >> newValue;
    insertSorted(head, newValue);

    // Menampilkan list setelah penambahan
    cout << "List setelah penambahan: ";
    printList(head);

    return 0;
}
