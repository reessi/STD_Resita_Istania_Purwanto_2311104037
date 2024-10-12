#include <iostream>
using namespace std;

int main() {
    int x = 30;
    int* ptr = &x; // pointer ptr menyimpan alamat variabel x

    cout << "Nilai yang ditunjuk x: " << *ptr << endl;
    return 0;
}
