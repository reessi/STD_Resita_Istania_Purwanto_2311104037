#include <iostream>
#include <cmath>

class Kerucut {
private:
    double jari_jari;
    double tinggi;

public:
    // Konstruktor
    Kerucut(double r, double t) : jari_jari(r), tinggi(t) {}

    // Fungsi untuk menghitung volume kerucut
    double volume() {
        return (1.0 / 3) * M_PI * jari_jari * jari_jari * tinggi;
    }

    // Fungsi untuk menghitung luas permukaan kerucut
    double luasPermukaan() {
        double sisi_miring = sqrt((jari_jari * jari_jari) + (tinggi * tinggi));
        return M_PI * jari_jari * (jari_jari + sisi_miring);
    }
};

int main() {
    Kerucut kerucut(5.0, 10.0);
    std::cout << "Volume kerucut: " << kerucut.volume() << std::endl;
    std::cout << "Luas permukaan kerucut: " << kerucut.luasPermukaan() << std::endl;
    return 0;
}


