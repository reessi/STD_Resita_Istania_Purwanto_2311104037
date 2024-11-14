#include <iostream>
#include "binary_tree.cpp"  // Include file binary_tree.cpp
using namespace std;

int main() {
    BinaryTree tree;
    char data, parent;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Buat Pohon\n";
        cout << "2. Tambah Node Kiri\n";
        cout << "3. Tambah Node Kanan\n";
        cout << "4. Update Node\n";
        cout << "5. Tampilkan Node\n";
        cout << "6. Tampilkan Child dan Descendant\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan data untuk root: ";
            cin >> data;
            tree.buatNode(data);
            break;

        case 2:
            cout << "Masukkan data untuk child kiri dan parent node: ";
            cin >> data >> parent;
            {
                Pohon* parentNode = tree.getRoot();
                if (parentNode) {
                    if (parentNode->data == parent) {
                        tree.insertLeft(data, parentNode);
                    } else {
                        cout << "Parent node tidak ditemukan.\n";
                    }
                } else {
                    cout << "Tree kosong, buat pohon terlebih dahulu.\n";
                }
            }
            break;

        case 3:
            cout << "Masukkan data untuk child kanan dan parent node: ";
            cin >> data >> parent;
            {
                Pohon* parentNode = tree.getRoot();
                if (parentNode) {
                    if (parentNode->data == parent) {
                        tree.insertRight(data, parentNode);
                    } else {
                        cout << "Parent node tidak ditemukan.\n";
                    }
                } else {
                    cout << "Tree kosong, buat pohon terlebih dahulu.\n";
                }
            }
            break;

        case 4:
            cout << "Masukkan data baru dan node yang ingin diubah: ";
            cin >> data >> parent;
            {
                Pohon* parentNode = tree.getRoot();
                if (parentNode) {
                    if (parentNode->data == parent) {
                        tree.update(data, parentNode);
                    } else {
                        cout << "Node tidak ditemukan.\n";
                    }
                } else {
                    cout << "Tree kosong, buat pohon terlebih dahulu.\n";
                }
            }
            break;

        case 5:
            cout << "Masukkan node yang ingin dilihat: ";
            cin >> parent;
            {
                Pohon* parentNode = tree.getRoot();
                if (parentNode) {
                    if (parentNode->data == parent) {
                        tree.retrieve(parentNode);
                    } else {
                        cout << "Node tidak ditemukan.\n";
                    }
                } else {
                    cout << "Tree kosong, buat pohon terlebih dahulu.\n";
                }
            }
            break;

        case 6:
            cout << "Masukkan node yang ingin ditampilkan child dan descendant-nya: ";
            cin >> parent;
            {
                Pohon* parentNode = tree.getRoot();
                if (parentNode) {
                    if (parentNode->data == parent) {
                        tree.showChildren(parentNode);
                    } else {
                        cout << "Node tidak ditemukan.\n";
                    }
                } else {
                    cout << "Tree kosong, buat pohon terlebih dahulu.\n";
                }
            }
            break;

        case 0:
            cout << "Keluar...\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 0);

    return 0;
}
