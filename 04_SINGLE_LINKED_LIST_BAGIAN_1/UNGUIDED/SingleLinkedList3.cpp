#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SingleLinkedList {
private:
    Node* head;

public:
    SingleLinkedList() : head(nullptr) {}

    void insertAtFront(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtBack(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    bool searchNode(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true; // Node found
            }
            temp = temp->next;
        }
        return false; // Node not found
    }

    int countLength() {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << "-> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    SingleLinkedList list;
    list.insertAtFront(10);
    list.insertAtBack(20);
    list.insertAtFront(5);

    int valueToSearch = 20;
    if (list.searchNode(valueToSearch)) {
        cout << "Node dengan nilai " << valueToSearch << " ditemukan." << endl;
    } else {
        cout << "Node dengan nilai " << valueToSearch << " tidak ditemukan." << endl;
    }

    int length = list.countLength();
    cout << "Panjang linked list: " << length << endl; // Output: Panjang linked list: 3

    return 0;
}
