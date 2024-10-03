#include <iostream>
using namespace std;

int main() {
	//Daftar harga barang
	const int harga_beras = 12000; //per kg
	const int harga_telur = 20000; //per kg
	const int harga_minyak = 15000; //per liter
	const int harga_gula = 13000; //per kg
	
	int pilihan, jumlah;
	int total_harga = 0;
	
	cout << "Selamat Datang di Supermarket Sederhana!" << endl;
	cout << "Daftar Barang yang Tersedia: " << endl;
	cout << "1. Beras (Rp. " << harga_beras << "/kg)" << endl;
	cout << "2. Telur (Rp. " << harga_telur << "/kg)" << endl;
	cout << "3. Minyak (Rp. " << harga_minyak << "/liter)" << endl;
	cout << "4. Gula (Rp. " << harga_gula << "/kg)" << endl;
	
	do{
		cout << "\nMasukkan nomor barang yang ingin dibeli (1-4), atau 0 untuk selesai: ";
		cin >> pilihan;
		
		if (pilihan == 0) break;  //keluar dari loop jika selesai memilih
		
		cout << "Masukkan jumlah (dalam satuan kg atau liter): ";
		cin >> jumlah;
		
		switch (pilihan) {
			case 1:
				total_harga += harga_beras * jumlah;
				cout << "Anda membeli " << jumlah << " kg Beras." << endl;
				break;
			case 2:
				total_harga += harga_telur * jumlah;
				cout << "Anda membeli " << jumlah << " kg Telur." << endl;
				break;
			case 3:
				total_harga += harga_minyak * jumlah;
				cout << "Anda membeli " << jumlah << " liter Minyak." << endl;
				break;
			case 4:
				total_harga += harga_gula * jumlah;
				cout << "Anda membeli " << jumlah << " kg Gula." << endl;
				break;
			default:
				cout << "Pilihan tidak valid. Silahkan pilih lagi." << endl;
		}
	} while (pilihan != 0);

	cout << "\nTotal harga belanja: Rp. " << total_harga<< endl;
	cout << "Terima kasih telah berbelanja di Supermarket Sederhana!" << endl;
	
	return 0;
}
