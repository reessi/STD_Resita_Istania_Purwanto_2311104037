#include <iostream>
using namespace std;

struct Pohon {
    char data;
    Pohon *left, *right, *parent;
};

class BinaryTree {
private:
    Pohon* root;
    Pohon* baru;

public:
    BinaryTree() : root(NULL), baru(NULL) {}

    bool isEmpty() {
        return root == NULL;
    }

    void buatNode(char data) {
        if (isEmpty()) {
            root = new Pohon{data, NULL, NULL, NULL};
            cout << "\nNode " << data << " berhasil dibuat menjadi root." << endl;
        } else {
            cout << "\nPohon sudah dibuat." << endl;
        }
    }

    Pohon* insertLeft(char data, Pohon* node) {
        if (isEmpty()) {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return NULL;
        }
        if (node->left != NULL) {
            cout << "\nNode " << node->data << " sudah ada child kiri!" << endl;
            return NULL;
        }
        baru = new Pohon{data, NULL, NULL, node};
        node->left = baru;
        cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
        return baru;
    }

    Pohon* insertRight(char data, Pohon* node) {
        if (isEmpty()) {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return NULL;
        }
        if (node->right != NULL) {
            cout << "\nNode " << node->data << " sudah ada child kanan!" << endl;
            return NULL;
        }
        baru = new Pohon{data, NULL, NULL, node};
        node->right = baru;
        cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
        return baru;
    }

    void update(char data, Pohon* node) {
        if (isEmpty()) {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return;
        }
        if (!node) {
            cout << "\nNode yang ingin diganti tidak ada!" << endl;
            return;
        }
        char temp = node->data;
        node->data = data;
        cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
    }

    void retrieve(Pohon* node) {
        if (isEmpty()) {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return;
        }
        if (!node) {
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
            return;
        }
        cout << "\nData node: " << node->data << endl;
    }

    void showChildren(Pohon* node) {
        if (!node) {
            cout << "\nNode tidak ditemukan!" << endl;
            return;
        }

        cout << "\nChild dari Node " << node->data << ": ";
        if (node->left) cout << node->left->data << " ";
        if (node->right) cout << node->right->data << " ";
        cout << endl;

        cout << "Descendants dari Node " << node->data << ": ";
        if (node->left) {
            cout << node->left->data << " ";
            showChildren(node->left);
        }
        if (node->right) {
            cout << node->right->data << " ";
            showChildren(node->right);
        }
    }

    Pohon* getRoot() {
        return root;
    }
};