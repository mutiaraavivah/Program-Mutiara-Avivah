#include <iostream>
using namespace std;

int main() {
	// Daftar Harga Buah 
	const int harga_jeruk = 5000;
	const int harga_mangga = 7000;
	const int harga_alpukat = 10000;
	
	int pilihan, jumlah;
	int total_harga = 0;
	
	cout << "Selamat Datang di Toko Buah!" << endl;
	cout << "Daftar Buah yang Tersedia: " << endl;
	cout << "1. Jeruk (Rp. " << harga_jeruk << "/buah)" << endl;
	cout << "2. Mangga (Rp. " << harga_mangga << "/buah)" << endl;
	cout << "3. Alpukat (Rp. " << harga_alpukat << "/buah)" << endl;
	
	cout << "\nMasukan nomor buah yang ingin dibeli (1-3): ";
	cin >> pilihan;
	
	cout << "Masukan jumlah buah yang ingin dibeli: ";
	cin >> jumlah;
	
	switch (pilihan) {
		case 1:
			total_harga = harga_jeruk * jumlah;
			cout << "Anda membeli " << jumlah << " jeruk." << endl;
			break;
		case 2:
			total_harga = harga_mangga * jumlah;
			cout << "Anda membeli " << jumlah << " mangga." << endl;
			break;
		case 3:
			total_harga = harga_alpukat * jumlah;
			cout << "Anda membeli " << jumlah << " alpukat." << endl;
			break;
		default:
			cout << "Pilihan tidak valid." << endl;
			return 0;
	
	}
	cout << "Total harga: Rp. " << total_harga << endl;
	cout << "Terima Kasih telah Berbelanja!" << endl;
	return 0;
}
