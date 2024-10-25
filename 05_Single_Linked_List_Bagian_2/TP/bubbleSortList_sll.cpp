#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi untuk mencetak Linked List
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi Bubble Sort untuk mengurutkan Linked List
void bubbleSort(Node* head) {
    if (head == nullptr) return;  // Jika list kosong, langsung kembali
    
    bool swapped;
    Node* current;
    Node* last = nullptr;  // Menandai bagian akhir dari list yang sudah terurut
    
    int iterasi = 1;  // Counter untuk melihat jumlah iterasi
    
    do {
        swapped = false;
        current = head;
        
        cout << "Iterasi " << iterasi << ": ";
        // Iterasi melalui Linked List hingga ke node yang belum terurut
        while (current->next != last) {
            if (current->data > current->next->data) {
                // Menukar data antara node saat ini dan node berikutnya
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;  // Menandai bahwa pertukaran terjadi
            }
            current = current->next;  // Lanjut ke node berikutnya
        }

        // Cetak list setelah setiap iterasi
        printList(head);

        last = current;  // Update bagian akhir dari list yang sudah terurut
        iterasi++;
    } while (swapped);  // Ulangi sampai tidak ada pertukaran lagi
}

int main() {
    // Membuat Linked List tanpa elemen 5: 4 -> 2 -> 3 -> 1
    Node* head = new Node{4, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{1, nullptr};
    
    // Cetak Linked List sebelum diurutkan
    cout << "List sebelum diurutkan: ";
    printList(head);
    
    // Mengurutkan list menggunakan Bubble Sort
    bubbleSort(head);
    
    // Cetak Linked List setelah diurutkan
    cout << "List setelah diurutkan: ";
    printList(head);

    return 0;
}

