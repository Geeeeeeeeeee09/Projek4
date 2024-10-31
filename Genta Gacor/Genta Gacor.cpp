#include <iostream>
#include <string>

using namespace std;

int main()
{
	//deklarasi variabel
	string nim;
	double hargaBarang;
	int jumlahBarang;
	int duaDigitTerakhir;
	int diskon;

	// input NIM, harga barang,dan jumlah barang

	cout << "masukan NIM: ";
	cin >> nim;
	cout << "masukan Harga Barang: ";
	cin >> hargaBarang;
	cout << "masukan Jumlah Barang: ";
	cin >> jumlahBarang;

	duaDigitTerakhir = stoi(nim.substr(nim.size() - 2));

	//tentukan diskon berdasarkan kondisi
	if (jumlahBarang > duaDigitTerakhir) {
		diskon = 15;
	}
	else {
		diskon = 5;
	}

	//hitung total harga sebelum diskon
	double totalHarga = hargaBarang = jumlahBarang;

	//hitung jumlah diskon
	double jumlahDiskon = (diskon / 100.0) * totalHarga;

	//hitung total bayar setelah diskon
	double totalBayar = totalHarga - jumlahDiskon;

	//output hasil
	cout << "jumlah Barang: " << jumlahBarang << endl;
	cout << "diskon: " << diskon << "%" << endl;
	cout << "total bayar setelah diskon: Rp" << totalBayar << endl;

	return 0;
}