#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk memeriksa apakah kata adalah palindrom
bool isPalindrome(const string &word) {
    int n = word.length();
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - 1 - i]) {
            return false; // Jika ada karakter yang berbeda, bukan palindrom
        }
    }
    return true; // Jika semua karakter sama, adalah palindrom
}

int main() {
    string word;
    cout << "Masukkan kata: ";
    cin >> word; // Menerima input kata dari pengguna

    if (isPalindrome(word)) {
        cout << "Kata tersebut adalah palindrom." << endl;
    } else {
        cout << "Kata tersebut bukan palindrom." << endl;
    }

    return 0;
}