# 📐 Program Hitung Luas Bangun Datar (C++)

Program ini adalah implementasi sederhana menggunakan bahasa pemrograman C++ untuk menghitung luas dari tiga jenis bangun datar: Segi Empat (Persegi Panjang), Segi Tiga, dan Lingkaran, yang diakses melalui sistem menu interaktif.

## ✨ Fitur Utama

* **Menu Interaktif**: Pengguna dapat memilih bangun datar mana yang ingin dihitung luasnya.
* **Penggunaan Fungsi**: Setiap perhitungan luas diisolasi dalam fungsi terpisah (`hitung_luas_segiempat`, `hitung_luas_segitiga`, `hitung_luas_lingkaran`).
* **Perhitungan Luas**:
    * **Segi Empat**: $Panjang \times Lebar$
    * **Segi Tiga**: $0.5 \times Alas \times Tinggi$
    * **Lingkaran**: $\pi \times Jari-jari^2$

## 🛠️ Persyaratan

Untuk menjalankan program ini, Anda memerlukan:

1.  **Compiler C++**: Seperti **GCC (GNU Compiler Collection)** atau **Clang**.
2.  **Sistem Operasi**: Windows, macOS, atau Linux.

## 🚀 Cara Kompilasi dan Menjalankan Program

### 1. Simpan Kode

Pastikan kode program disimpan dalam file bernama `HitungLuas.cpp`.

### 2. Kompilasi (Menggunakan g++)

Buka Terminal (atau Command Prompt) dan gunakan perintah berikut untuk mengkompilasi file:

```bash
g++ HitungLuas.cpp -o HitungLuas
