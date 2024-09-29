/*#include <iostream>

using namespace std;

int main (){
    float num1, num2;

    cout << "Masukkan dua bilangan:";
    cin >> num1 >> num2;

    cout << "Penjumlahan: " << num1 + num2 << endl;
    cout << "Pengurangan: " << num1 - num2 << endl;
    cout << "Perkalian: " << num1 * num2 << endl;
    cout << "Pembagian: " << num1 / num2 << endl;

    return 0;
}*/

/*#include <iostream>
#include <string>

using namespace std;

string numberToWords(int num) {
    string oneToNineteen [] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh",
                               "Sebelas", "Dua belas", "Tiga belas", "Empat belas", "Lima belas", "Enam belas", "Tujuh belas",
                               "Delapan belas", "Sembilan belas"};
    string tens[] = {"", "", "Dua puluh", "Tiga puluh", "Empat puluh", "Lima puluh", "Enam puluh",
                      "Tujuh puluh", "Delapan puluh", "Sembilan puluh"};

    if (num < 20)
        return oneToNineteen[num];
    else if (num < 100)
    return tens [num / 10] + (num % 10 != 0 ? "" + oneToNineteen[num % 10] : "");
    else if (num == 100)
        return "Seratus";

    return "Invalid Input"; // Out of 0-100 range

}
int main (){
    int number;
    cout << "Masukkan angka (0-100): ";
    cin >> number;

    if(number >= 0 && number <= 100)
        cout << number << " : " << numberToWords(number) << endl;
    else
        cout << "Angka tidak valid" << endl;

    return 0;
}*/


#include <iostream>

using namespace std;
int main(){
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = n; i >= 1; i--){
        for(int j = i; j>= 1; j--){
            cout << j << " ";
        }

        cout << "* ";

        for (int j = 1; j <= i; j++){
                 cout << j << " ";
        }
        cout << endl;
    }
       return 0;

}
