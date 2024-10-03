#include <iostream>
#include <string>
using namespace std;

//struct untuk menyimpan data mata kuliah
struct MataKuliah {
	string nama;
	string hari;
	string waktu;
};
 
//Fungsi untuk menampilkan jadwal mata kuliah
void tampilkanJadwal(MataKuliah mk[], int jumlah) {
	cout << "\nJadwal Mata Kuliah S1 Informatika:\n";
	for (int i = 0; i < jumlah; i++) {
		cout << i + 1 << ". " << mk[i].nama << " - " << mk[i].hari << " - " << mk[i].waktu << endl;
	}
}

int main() {
	int jumlah;
	
	cout << "Masukkan jumlah mata kuliah: ";
	cin >> jumlah;
	cin.ignore(); //Mengabaikan karakter newline
	
	//Array of struct untuk menyimpan jadwal mata kuliah
	MataKuliah mk[jumlah];
	
	//Memasukkan data mata kuliah
	for (int i = 0; i < jumlah; i++) {
		cout << "\nMasukkan data untuk mata kuliah ke-" << i + 1 << ":\n";
		cout << "Nama mata kuliah: ";
		getline(cin, mk[i].nama);
		cout << "Hari: ";
		getline(cin, mk[i].hari);
		cout << "Waktu: ";
		getline(cin, mk[i].waktu);
	}
	
	//Menampilkan jadwal mata kuliah
	tampilkanJadwal(mk, jumlah);
	
	return 0;
}
