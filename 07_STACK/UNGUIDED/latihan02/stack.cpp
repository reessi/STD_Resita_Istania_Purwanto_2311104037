#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

// Fungsi untuk membalik kalimat
void reverseSentence(const string &input) {
    stack<string> s; // Menggunakan stack untuk menyimpan kata
    stringstream ss(input); // Menggunakan stringstream untuk memisahkan kata
    string word;

    // Memasukkan setiap kata ke dalam stack
    while (ss >> word) {
        s.push(word);
    }

    // Menampilkan kalimat dengan kata-kata terbalik
    cout << "Kalimat setelah dibalik: ";
    while (!s.empty()) {
        cout << s.top() << " "; // Mengeluarkan kata teratas dari stack
        s.pop(); // Menghapus kata dari stack
    }
    cout << endl; // Menambahkan baris baru setelah kalimat terbalik
}

int main() {
    string input;
    cout << "Masukkan kalimat dengan minimal 3 kata: ";
    getline(cin, input); // Menerima input kalimat dari pengguna

    // Memastikan kalimat memiliki minimal 3 kata
    stringstream ss(input);
    string word;
    int wordCount = 0;
    
    while (ss >> word) {
        wordCount++;
    }

    if (wordCount < 3) {
        cout << "Harap masukkan kalimat dengan minimal 3 kata." << endl;
    } else {
        reverseSentence(input); // Memanggil fungsi untuk membalik kalimat
    }

    return 0;
}
