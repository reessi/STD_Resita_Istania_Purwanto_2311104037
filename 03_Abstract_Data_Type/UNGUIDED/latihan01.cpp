#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    double uts;
    double uas;
    double tugas;
    double nilaiAkhir;

    // Fungsi untuk menghitung nilai akhir
    double hitungNilaiAkhir() {
        return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
    }
};

int main() {
    Mahasiswa mahasiswaArray[10];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa " << (i + 1) << endl;
        cout << "Nama: ";
        cin >> mahasiswaArray[i].nama;
        cout << "NIM: ";
        cin >> mahasiswaArray[i].nim;
        cout << "UTS: ";
        cin >> mahasiswaArray[i].uts;
        cout << "UAS: ";
        cin >> mahasiswaArray[i].uas;
        cout << "Tugas: ";
        cin >> mahasiswaArray[i].tugas;
        mahasiswaArray[i].nilaiAkhir = mahasiswaArray[i].hitungNilaiAkhir();
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswaArray[i].nama 
             << ", NIM: " << mahasiswaArray[i].nim 
             << ", Nilai Akhir: " << mahasiswaArray[i].nilaiAkhir << endl;
    }

    return 0;
}
