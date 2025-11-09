#include <iostream>
#include <cmath>

using namespace std;

const float PI = M_PI;

float hitung_luas_segiempat(float panjang, float lebar) {
    return panjang * lebar;
}

float hitung_luas_segitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

float hitung_luas_lingkaran(float jari_jari) {
    return PI * jari_jari * jari_jari;
}

void tampilkan_menu() {
    cout << "\n=======================================" << endl;
    cout << " PROGRAM HITUNG LUAS BANGUN DATAR " << endl;
    cout << "=======================================" << endl;
    cout << "1. Hitung Luas Segi Empat (Persegi Panjang)" << endl;
    cout << "2. Hitung Luas Segi Tiga" << endl;
    cout << "3. Hitung Luas Lingkaran" << endl;
    cout << "4. Keluar Program" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Masukkan pilihan (1-4): ";
}

int main() {
    int pilihan;

    do {
        tampilkan_menu();
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                float panjang, lebar;
                cout << "\n--- Luas Segi Empat ---" << endl;
                cout << "Masukkan panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar: ";
                cin >> lebar;
                float hasil = hitung_luas_segiempat(panjang, lebar);
                cout << "Luas Segi Empat adalah: " << hasil << endl;
                break;
            }
            case 2: {
                float alas, tinggi;
                cout << "\n--- Luas Segi Tiga ---" << endl;
                cout << "Masukkan alas: ";
                cin >> alas;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                float hasil = hitung_luas_segitiga(alas, tinggi);
                cout << "Luas Segi Tiga adalah: " << hasil << endl;
                break;
            }
            case 3: {
                float jari_jari;
                cout << "\n--- Luas Lingkaran ---" << endl;
                cout << "Masukkan jari-jari: ";
                cin >> jari_jari;
                float hasil = hitung_luas_lingkaran(jari_jari);
                cout << "Luas Lingkaran adalah: " << hasil << endl;
                break;
            }
            case 4: {
                cout << "\nTerima kasih, program selesai." << endl;
                break;
            }
            default: {
                cout << "\nPilihan tidak valid. Silakan masukkan angka 1 sampai 4." << endl;
                break;
            }
        }
    } while (pilihan != 4);

    return 0;
}
