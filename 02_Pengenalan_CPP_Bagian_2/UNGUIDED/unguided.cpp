// #include <iostream>
// using namespace std;

// int main() {
//     const int N = 10;
//     int arr[N];

//     // Input data dari user
//     cout << "Data Array: ";
//     for (int i = 0; i < N; i++) {
//         cin >> arr[i];
//     }

//     // Menampilkan nomor genap
//     cout << "Nomor Genap: ";
//     for (int i = 0; i < N; i++) {
//         if (arr[i] % 2 == 0) {
//             cout << arr[i] << ", ";
//         }
//     }
//     cout << endl;

//     // Menampilkan nomor ganjil
//     cout << "Nomor Ganjil: ";
//     for (int i = 0; i < N; i++) {
//         if (arr[i] % 2 != 0) {
//             cout << arr[i] << ", ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

//soal2
// #include <iostream>
// using namespace std;

// int main() {
//     int x, y, z;

//     // Input ukuran array dari user
//     cout << "Masukkan ukuran array (x y z): ";
//     cin >> x >> y >> z;

//     // Deklarasi array 3 dimensi
//     int arr[x][y][z];

//     // Input nilai-nilai array
//     cout << "Masukkan elemen-elemen array: " << endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 cout << "arr[" << i << "][" << j << "][" << k << "] = ";
//                 cin >> arr[i][j][k];
//             }
//         }
//     }

//     // Menampilkan array yang diinput
//     cout << "Array yang diinput adalah: " << endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 cout << arr[i][j][k] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }

//     return 0;
// }

//soal3
// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     // Input jumlah elemen array
//     cout << "Masukkan jumlah elemen array: ";
//     cin >> n;

//     int arr[n];

//     // Input nilai array
//     cout << "Masukkan elemen-elemen array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int pilihan;
//     do {
//         // Menampilkan menu
//         cout << "\nMenu: " << endl;
        // cout << "1. Cari Nilai Maksimum" << endl;
        // cout << "2. Cari Nilai Minimum" << endl;
        // cout << "3. Cari Rata-Rata" << endl;
        // cout << "4. Keluar" << endl;
        // cout << "Pilihan: ";
        // cin >> pilihan;

        // switch (pilihan) {
        //     case 1: {
        //         // Cari nilai maksimum
        //         int maks = arr[0];
        //         for (int i = 1; i < n; i++) {
        //             if (arr[i] > maks) {
        //                 maks = arr[i];
        //             }
        //         }
        //         cout << "Nilai maksimum: " << maks << endl;
        //         break;
        //     }
        //     case 2: {
        //         // Cari nilai minimum
            //     int min = arr[0];
            //     for (int i = 1; i < n; i++) {
            //         if (arr[i] < min) {
            //             min = arr[i];
            //         }
            //     }
            //     cout << "Nilai minimum: " << min << endl;
            //     break;
            // }
            // case 3: {
            //     // Cari rata-rata
            //     double sum = 0;
            //     for (int i = 0; i < n; i++) {
            //         sum += arr[i];
            //     }
            //     double rata = sum / n;
            //     cout << "Nilai rata-rata: " << rata << endl;
//                 break;
//             }
//             case 4:
//                 cout << "Keluar dari program." << endl;
//                 break;
//             default:
//                 cout << "Pilihan tidak valid." << endl;
//         }

//     } while (pilihan != 4);

//     return 0;
// }
 
