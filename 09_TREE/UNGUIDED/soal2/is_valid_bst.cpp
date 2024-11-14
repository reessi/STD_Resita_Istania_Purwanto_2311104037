#include <iostream>
#include <limits.h>  // Untuk INT_MIN dan INT_MAX
using namespace std;

// Struktur Pohon
struct Pohon {
    int data;
    Pohon *left, *right;
};

// Fungsi rekursif untuk memeriksa apakah pohon adalah BST
bool is_valid_bst(Pohon* node, long min_val, long max_val) {
    if (node == nullptr) return true;  // Basis: Pohon kosong adalah BST

    // Periksa apakah data node berada dalam rentang yang valid
    if (node->data <= min_val || node->data >= max_val) {
        return false;
    }

    // Rekursi untuk subtree kiri dan kanan dengan pembaruan batas
    return is_valid_bst(node->left, min_val, node->data) && 
           is_valid_bst(node->right, node->data, max_val);
}

// Fungsi untuk membuat node baru
Pohon* newNode(int data) {
    Pohon* node = new Pohon;
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

// Fungsi untuk menguji is_valid_bst
void test_is_valid_bst() {
    // Membuat pohon valid sebagai BST
    Pohon* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(20);
    root->left->left = newNode(3);
    root->left->right = newNode(7);
    root->right->left = newNode(15);
    root->right->right = newNode(30);

    cout << "Pohon valid sebagai BST? " << (is_valid_bst(root, LONG_MIN, LONG_MAX) ? "Ya" : "Tidak") << endl;

    // Membuat pohon tidak valid
    Pohon* invalidRoot = newNode(10);
    invalidRoot->left = newNode(5);
    invalidRoot->right = newNode(20);
    invalidRoot->left->right = newNode(25);  // Ini melanggar BST karena 25 > 10

    cout << "Pohon valid sebagai BST? " << (is_valid_bst(invalidRoot, LONG_MIN, LONG_MAX) ? "Ya" : "Tidak") << endl;
}

int main() {
    test_is_valid_bst();
    return 0;
}
