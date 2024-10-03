#include <iostream>
#include <string>
using namespace std;

//Struct untuk menyimpan data penyewa kost
struct penyewa {
	string nama;
	string kamar;
	double hargaPerBulan;
};

//Fungsi untuk menampilkan data penyewa dan menghitung total pembayaran
void hitungPembayaran(penyewa Penyewa) {
	int jumlahBulan;
	cout << "Masukkan jumlah bulan yang ingin dibayar oleh " << Penyewa.nama << ": ";
	cin >> jumlahBulan;
	
	//Menghitung total pembayaran
	double totalPembayaran = jumlahBulan * Penyewa.hargaPerBulan;
	cout << "Total pembayaran untuk " << jumlahBulan << " bulan: Rp" << totalPembayaran << endl;
}

int main() {
	penyewa Penyewa;
	
	//Memasukkan data penyewa
	cout << "Masukkan nama penyewa: ";
	getline(cin, Penyewa.nama);
	cout << "Masukkan nomor kamar penyewa: ";
	getline(cin, Penyewa.kamar);
	cout << "Masukkan harga per bulan untuk kamar: Rp";
	cin >> Penyewa.hargaPerBulan;
	
	//Menampilkan data penyewa dan menghitung pembayaran
	cout << "\nData Penyewa Kost:\n";
	cout << "Nama: " << Penyewa.nama << endl;
	cout << "Kamar: " << Penyewa.kamar << endl;
	cout << "Harga per bulan: Rp" << Penyewa.hargaPerBulan << endl;
	
	//Menghitung dan menampilkan total pembayaran
	hitungPembayaran(Penyewa);
	
	return 0;
}
