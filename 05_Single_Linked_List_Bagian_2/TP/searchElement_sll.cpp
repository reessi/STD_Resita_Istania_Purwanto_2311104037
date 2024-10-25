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

void searchElement(Node* head, int value) {
    Node* current = head;
    int position = 1;
    
    while (current != nullptr) {
        if (current->data == value) {
            cout << "Elemen ditemukan pada alamat: " << current << " di urutan ke-" << position << endl;
            return;
        }
        current = current->next;
        position++;
    }
    
    cout << "Elemen tidak ditemukan dalam list." << endl;
}

int main() {
    Node* head = nullptr;
    int values[6];

    // Memasukkan elemen ke dalam list
    cout << "Masukkan 6 elemen integer: ";
    for (int i = 0; i < 6; i++) {
        cin >> values[i];
        insert(head, values[i]);
    }

    // Memasukkan elemen yang ingin dicari
    int searchValue;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> searchValue;

    // Mencari elemen
    searchElement(head, searchValue);

    return 0;
}
