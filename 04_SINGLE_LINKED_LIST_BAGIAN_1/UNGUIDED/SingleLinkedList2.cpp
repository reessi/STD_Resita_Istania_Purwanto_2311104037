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

    void deleteNode(int value) {
        if (head == nullptr) return;

        // Handle deletion of head node
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;
        while (current != nullptr && current->data != value) {
            previous = current;
            current = current->next;
        }

        if (current == nullptr) return; // Value not found

        previous->next = current->next;
        delete current;
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
    list.deleteNode(10);
    list.printList(); // Output: 5->20

    return 0;
}
