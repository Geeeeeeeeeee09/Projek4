#include <iostream> // Mengimpor pustaka untuk input dan output
#include <cmath>    // Mengimpor pustaka untuk fungsi matematika, seperti pow()

using namespace std; // Menggunakan ruang nama standar agar tidak perlu menulis std:: setiap kali

const double PI = 3.14159; // Mendefinisikan konstanta PI untuk perhitungan lingkaran

// Fungsi untuk menghitung luas persegi
void luasPersegi() {
    double sisi; // Variabel untuk menyimpan panjang sisi persegi
    cout << "Masukkan panjang sisi persegi: "; // Menampilkan pesan untuk meminta input
    cin >> sisi; // Mengambil input dari pengguna untuk panjang sisi
    cout << "Luas persegi: " << sisi * sisi << endl; // Menghitung dan menampilkan luas (sisi * sisi)
}

// Fungsi untuk menghitung keliling persegi
void kelilingPersegi() {
    double sisi; // Variabel untuk menyimpan panjang sisi persegi
    cout << "Masukkan panjang sisi persegi: "; // Menampilkan pesan untuk meminta input
    cin >> sisi; // Mengambil input dari pengguna untuk panjang sisi
    cout << "Keliling persegi: " << 4 * sisi << endl; // Menghitung dan menampilkan keliling (4 * sisi)
}

// Fungsi untuk menghitung luas persegi panjang
void luasPersegiPanjang() {
    double panjang, lebar; // Variabel untuk menyimpan panjang dan lebar persegi panjang
    cout << "Masukkan panjang: "; // Menampilkan pesan untuk meminta input
    cin >> panjang; // Mengambil input dari pengguna untuk panjang
    cout << "Masukkan lebar: "; // Menampilkan pesan untuk meminta input
    cin >> lebar; // Mengambil input dari pengguna untuk lebar
    cout << "Luas persegi panjang: " << panjang * lebar << endl; // Menghitung dan menampilkan luas (panjang * lebar)
}

// Fungsi untuk menghitung keliling persegi panjang
void kelilingPersegiPanjang() {
    double panjang, lebar; // Variabel untuk menyimpan panjang dan lebar persegi panjang
    cout << "Masukkan panjang: "; // Menampilkan pesan untuk meminta input
    cin >> panjang; // Mengambil input dari pengguna untuk panjang
    cout << "Masukkan lebar: "; // Menampilkan pesan untuk meminta input
    cin >> lebar; // Mengambil input dari pengguna untuk lebar
    cout << "Keliling persegi panjang: " << 2 * (panjang + lebar) << endl; // Menghitung dan menampilkan keliling (2 * (panjang + lebar))
}

// Fungsi untuk menghitung luas segitiga
void luasSegitiga() {
    double alas, tinggi; // Variabel untuk menyimpan alas dan tinggi segitiga
    cout << "Masukkan alas: "; // Menampilkan pesan untuk meminta input
    cin >> alas; // Mengambil input dari pengguna untuk alas
    cout << "Masukkan tinggi: "; // Menampilkan pesan untuk meminta input
    cin >> tinggi; // Mengambil input dari pengguna untuk tinggi
    cout << "Luas segitiga: " << 0.5 * alas * tinggi << endl; // Menghitung dan menampilkan luas (0.5 * alas * tinggi)
}

// Fungsi untuk menghitung keliling segitiga
void kelilingSegitiga() {
    double a, b, c; // Variabel untuk menyimpan panjang sisi segitiga
    cout << "Masukkan sisi a: "; // Menampilkan pesan untuk meminta input
    cin >> a; // Mengambil input dari pengguna untuk sisi a
    cout << "Masukkan sisi b: "; // Menampilkan pesan untuk meminta input
    cin >> b; // Mengambil input dari pengguna untuk sisi b
    cout << "Masukkan sisi c: "; // Menampilkan pesan untuk meminta input
    cin >> c; // Mengambil input dari pengguna untuk sisi c
    cout << "Keliling segitiga: " << a + b + c << endl; // Menghitung dan menampilkan keliling (a + b + c)
}

// Fungsi untuk menghitung luas lingkaran
void luasLingkaran() {
    double radius; // Variabel untuk menyimpan jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: "; // Menampilkan pesan untuk meminta input
    cin >> radius; // Mengambil input dari pengguna untuk jari-jari
    cout << "Luas lingkaran: " << PI * pow(radius, 2) << endl; // Menghitung dan menampilkan luas (pi * r^2)
}

// Fungsi untuk menghitung keliling lingkaran
void kelilingLingkaran() {
    double radius; // Variabel untuk menyimpan jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: "; // Menampilkan pesan untuk meminta input
    cin >> radius; // Mengambil input dari pengguna untuk jari-jari
    cout << "Keliling lingkaran: " << 2 * PI * radius << endl; // Menghitung dan menampilkan keliling (2 * pi * r)
}

// Fungsi untuk menghitung luas trapesium
void luasTrapesium() {
    double a, b, tinggi; // Variabel untuk sisi sejajar a, b dan tinggi trapesium
    cout << "Masukkan sisi sejajar a: "; // Menampilkan pesan untuk meminta input
    cin >> a; // Mengambil input dari pengguna untuk sisi a
    cout << "Masukkan sisi sejajar b: "; // Menampilkan pesan untuk meminta input
    cin >> b; // Mengambil input dari pengguna untuk sisi b
    cout << "Masukkan tinggi trapesium: "; // Menampilkan pesan untuk meminta input
    cin >> tinggi; // Mengambil input dari pengguna untuk tinggi
    cout << "Luas trapesium: " << 0.5 * (a + b) * tinggi << endl; // Menghitung dan menampilkan luas (0.5 * (a + b) * tinggi)
}

// Fungsi untuk menghitung keliling trapesium
void kelilingTrapesium() {
    double a, b, c, d; // Variabel untuk menyimpan panjang semua sisi trapesium
    cout << "Masukkan sisi a: "; // Menampilkan pesan untuk meminta input
    cin >> a; // Mengambil input dari pengguna untuk sisi a
    cout << "Masukkan sisi b: "; // Menampilkan pesan untuk meminta input
    cin >> b; // Mengambil input dari pengguna untuk sisi b
    cout << "Masukkan sisi c: "; // Menampilkan pesan untuk meminta input
    cin >> c; // Mengambil input dari pengguna untuk sisi c
    cout << "Masukkan sisi d: "; // Menampilkan pesan untuk meminta input
    cin >> d; // Mengambil input dari pengguna untuk sisi d
    cout << "Keliling trapesium: " << a + b + c + d << endl; // Menghitung dan menampilkan keliling (a + b + c + d)
}

// Fungsi utama untuk menjalankan program
int main() {
    int pilihan; // Variabel untuk menyimpan pilihan menu pengguna

    // Loop do-while untuk terus menampilkan menu hingga pengguna memilih untuk keluar
    do {
        // Menampilkan menu pilihan bangun datar
        cout << "\nPilih bangun datar yang ingin dihitung:\n";
        cout << "1. Luas Persegi\n";
        cout << "2. Keliling Persegi\n";
        cout << "3. Luas Persegi Panjang\n";
        cout << "4. Keliling Persegi Panjang\n";
        cout << "5. Luas Segitiga\n";
        cout << "6. Keliling Segitiga\n";
        cout << "7. Luas Lingkaran\n";
        cout << "8. Keliling Lingkaran\n";
        cout << "9. Luas Trapesium\n";
        cout << "10. Keliling Trapesium\n";
        cout << "11. Keluar Program\n";
        cout << "Masukkan pilihan Anda: "; // Meminta pengguna untuk memasukkan pilihan
        cin >> pilihan; // Mengambil input dari pengguna

        // Memilih fungsi yang sesuai berdasarkan input pengguna
        switch (pilihan) {
        case 1:
            luasPersegi(); // Panggil fungsi untuk menghitung luas persegi
            break;
        case 2:
            kelilingPersegi(); // Panggil fungsi untuk menghitung keliling persegi
            break;
        case 3:
            luasPersegiPanjang(); // Panggil fungsi untuk menghitung luas persegi panjang
            break;
        case 4:
            kelilingPersegiPanjang(); // Panggil fungsi untuk menghitung keliling persegi panjang
            break;
        case 5:
            luasSegitiga(); // Panggil fungsi untuk menghitung luas segitiga
            break;
        case 6:
            kelilingSegitiga(); // Panggil fungsi untuk menghitung keliling segitiga
            break;
        case 7:
            luasLingkaran(); // Panggil fungsi untuk menghitung luas lingkaran
            break;
        case 8:
            kelilingLingkaran(); // Panggil fungsi untuk menghitung keliling lingkaran
            break;
        case 9:
            luasTrapesium(); // Panggil fungsi untuk menghitung luas trapesium
            break;
        case 10:
            kelilingTrapesium(); // Panggil fungsi untuk menghitung keliling trapesium
            break;
        case 11:
            cout << "Keluar dari program.\n"; // Menampilkan pesan keluar program
            break;
        default:
            cout << "Pilihan tidak valid.\n"; // Jika pilihan tidak sesuai, tampilkan pesan kesalahan
        }
    } while (pilihan != 11); // Ulangi hingga pengguna memilih untuk keluar (pilihan 11)

    return 0; // Mengakhiri program dan mengembalikan nilai 0 ke sistem
}