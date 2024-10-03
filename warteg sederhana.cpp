#include <iostream>
using namespace std;

int main() {
	//Daftar Harga Makanan di Warteg
	const int harga_nasi = 5000;
	const int harga_ayam = 10000;
	const int harga_tempe = 2000;
	const int harga_tahu = 2000;
	const int harga_sayur = 4000;
	
	int pilihan, jumlah;
	int total_harga = 0;
	
	cout << "Selamat Datang di Warteg Sederhana!" << endl;
	cout << "Daftar Makanan yang Tersedia: " << endl;
	cout << "1. Nasi (Rp. " << harga_nasi << "/porsi)" << endl;
	cout << "2. Ayam Goreng (Rp. " << harga_ayam << "/potong)" << endl;
	cout << "3. Tempe (Rp. " << harga_tempe << "/buah)" << endl;
	cout << "4. Tahu (Rp. " << harga_tahu << "/buah)" << endl;
	cout << "5. Sayur (Rp. " << harga_sayur << "/porsi)" << endl;
	
	do {
		cout << "\nMasukkan nomor makanan yang ingin dipesan (1-5), atau 0 untuk selesai: ";
		cin >> pilihan;
		
		if (pilihan == 0) break; //Keluar dari loop jika pengguna selesai memilih
		
		cout << "Masukkan jumlah yang ingin dipesan: ";
		cin >> jumlah;
		
		switch (pilihan) {
			case 1:
				total_harga += harga_nasi * jumlah;
				cout << "Anda memesan " << jumlah << " porsi Nasi." << endl;
				break;
			case 2:
				total_harga += harga_ayam * jumlah;
				cout << "Anda memesan " << jumlah << " potong Ayam Goreng." << endl;
				break;
			case 3:
				total_harga += harga_tempe * jumlah;
				cout << "Anda memesan " << jumlah << " buah Tempe Goreng." << endl;
				break;
			case 4:
				total_harga += harga_tahu * jumlah;
				cout << "Anda memesan " << jumlah << " buah Tahu Goreng." << endl;
				break;
			case 5:
				total_harga += harga_sayur * jumlah;
				cout << "Anda memesan " << jumlah << " porsi Sayur." << endl;
				break;
			default:
				cout << "pilihan tidak valid. Silahkan pilih lagi." << endl;
			}
		} while (pilihan != 0);
		
		cout << "\nTotal harga: Rp. " << total_harga << endl;
		cout << "Terima kasih telah memesan di Warteg Sederhana!" << endl;
		
		return 0;
}

