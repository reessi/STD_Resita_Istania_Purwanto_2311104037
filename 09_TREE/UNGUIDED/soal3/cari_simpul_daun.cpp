#include <iostream>
using namespace std;

// Struktur Pohon
struct Pohon {
    int data;
    Pohon *left, *right;
};

// Fungsi rekursif untuk menghitung jumlah simpul daun
int cari_simpul_daun(Pohon* node) {
    if (node == nullptr) return 0;  // Jika node kosong, tidak ada simpul daun

    // Jika node tidak memiliki anak kiri dan kanan, maka itu adalah simpul daun
    if (node->left == nullptr && node->right == nullptr) {
        return 1;
    }

    // Rekursi untuk menghitung simpul daun di subtree kiri dan kanan
    return cari_simpul_daun(node->left) + cari_simpul_daun(node->right);
}

// Fungsi untuk membuat node baru
Pohon* newNode(int data) {
    Pohon* node = new Pohon;
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

// Fungsi untuk menguji cari_simpul_daun
void test_cari_simpul_daun() {
    // Membuat pohon contoh
    Pohon* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(20);
    root->left->left = newNode(3);
    root->left->right = newNode(7);
    root->right->left = newNode(15);
    root->right->right = newNode(30);

    cout << "Jumlah simpul daun: " << cari_simpul_daun(root) << endl;

    // Pohon hanya memiliki satu simpul daun
    Pohon* singleLeaf = newNode(5);
    singleLeaf->left = newNode(3);
    singleLeaf->right = newNode(7);
    cout << "Jumlah simpul daun (singleLeaf): " << cari_simpul_daun(singleLeaf) << endl;
}

int main() {
    test_cari_simpul_daun();
    return 0;
}
