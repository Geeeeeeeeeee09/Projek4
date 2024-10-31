#include <iostream> // Mengimpor pustaka input-output c++
#include <string> // Mengimpor pustaka untuk menggunakan string

using namespace std; // Menggunkan namespace std agar tidak perlu menulis std:: setiap kali

int main()
{
	// Deklarasi variabel
	string nim;				// Variabel untuk menyimpan NIM pelanggan (Nomor Induk Mahasiswa)
	double hargaBarang;		// Variabel untuk menyimpan harga per barang (dalam tipe desimal)
	int jumlahBarang;		// Variabel untuk menyimpan jumlah barang yang di beli (dalam tipe integer)
	int duaDigitTerakhir;	// Variabel untuk menyimpan dua digit terakhir dari NIM 
	int diskon;				// Variabel untuk menyimpan nilai diskon yang diterapkan (dalam persen)

	// Input NIM, harga barang,dan jumlah barang

	cout << "masukan NIM: ";
	cin >> nim; // Mengambil input NIM dan menyimpannya dalam bentuk nim

	// Input harga barang dari user
	cout << "masukan Harga Barang: ";
	cin >> hargaBarang; // Mengambil input harga barang dan menyimpannya dalam variabel haragBarang

	// Input jumlah barang dari user
	cout << "masukan Jumlah Barang: ";
	cin >> jumlahBarang; // Mengambil input jumlah barang dan menyimpannya dalam variabel jumlahBarang
	
	// Ambil dua digit terakhir NIM
	// nim.size() mengambilkan panjang string NIM
	// nim.substr(nim.size() -2) mengambil substring dari NIM, yaitu 2 karakter terakhir
	// stoi(...) mengonversi substring ini dari string ke integer
	duaDigitTerakhir = stoi(nim.substr(nim.size() - 2));

	// Tentukan diskon berdasarkan kondisi jumlah barang dibandikan dua digit terakhir NIM
	if (jumlahBarang > duaDigitTerakhir) { // Jika jumlah barang lebih besar dari dua digit terakhir NIM
		diskon = 15; // Terapkan diskon 15%
	}
	else { // Jika tidak
		diskon = 5; // Terapkan diskon 5%
	}

	// Hitung total harga sebelum diskon
	// totalHarga adalah hasil kali antara harga per barang dan jumlah barang yang dibeli
	double totalHarga = hargaBarang = jumlahBarang;

	// Hitung jumlah diskon dalam satuan uang
	// (diskon / 100.0) menginversi persen menjadi desimal
	double jumlahDiskon = (diskon / 100.0) * totalHarga;

	// Hitung total yang harus dibayar setelah diskon
	double totalBayar = totalHarga - jumlahDiskon;

	// Output hasil perhitungan
	cout << "jumlah Barang: " << jumlahBarang << endl; // Menampilkan jumlah barang yang dibeli
	cout << "diskon: " << diskon << "%" << endl; // Menampilkan nilai diskon dalam persen
	cout << "total bayar setelah diskon: Rp" << totalBayar << endl; // Menampilkan total yang harus dibayar setelah diskon

	return 0; // Mengembalikan nilai 0 menandakan bahwa program telah selesai dengan baik
}