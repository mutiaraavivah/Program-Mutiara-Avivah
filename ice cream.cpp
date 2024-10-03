#include <iostream>
#include <string>
using namespace std;

//Struct untuk menyimpan data ice cream
struct IceCream {
	string nama;
	int stok;
	double harga;
};

//Fungsi untuk menampilkan menu ice cream
void tampilkanMenu(IceCream iceCream[], int jumlah) {
	cout << "\nMenu Ice Cream:\n";
	for (int i = 0; i < jumlah; i++) {
		cout << i + 1 << ". " << iceCream[i].nama << " - Stok: " << iceCream[i].stok << " - Harga: Rp" << iceCream[i].harga << endl;
	}
}

//Fungsi untuk melakukan pembelian ice cream
void beliIceCream(IceCream iceCream[], int jumlah) {
	int pilihan, qty;
	double total = 0;
	
	while (true) {
		cout << "\nMasukkan nomor ice cream yang ingin dibeli (0 umtuk keluar): ";
		cin >> pilihan;
		if (pilihan == 0) break;
		if (pilihan < 1 || pilihan > jumlah) {
			cout << "Nomor tidak valid. Cobs lagi.\n";
			continue;
		}
		cout << "Masukkan jumlah yang ingin dibeli: ";
		cin >> qty;
		
		if (qty > iceCream[pilihan - 1].stok) {
			cout << "Stok tidak mencukupi. Coba lagi.\n";
		} else {
			iceCream[pilihan - 1].stok -= qty;
			total += qty * iceCream[pilihan - 1].harga;
			cout << "Anda membeli " << qty << " " << iceCream[pilihan - 1].nama << " dengan total harga: Rp" << qty * iceCream[pilihan - 1].harga << endl;
		}
	}
	cout << "\nTotal pembelian: Rp" << total << endl;
}

int main() {
	int jumlah;
	
	cout << "Masukkan jumlah jenis ice cream yang tersedia: ";
	cin >> jumlah;
	cin.ignore(); //Mengabaikan karakter newline
	
	//Array of struct untuk menyimpan data ice cream
	IceCream iceCream[jumlah];
	
	//Memasukkan data ice cream
	for (int i = 0; i < jumlah; i++) {
		cout << "\nMasukkan data untuk ice cream ke-" << i + 1 << ":\n";
		getline(cin, iceCream[i].nama);
		cout << "stok: ";
		cin >> iceCream[i].stok;
		cout << "Harga: Rp";
		cin >> iceCream[i].harga;
		cin.ignore(); //Mengabaikan newline input berikutnya
	}
	
	//Menampilkan menu ice cream
	tampilkanMenu(iceCream, jumlah);
	
	//Melakukan pembelian ice cream
	beliIceCream(iceCream, jumlah);
	
	return 0;
}
