#include <iostream>
#include <cstdlib> //Untuk fungsi rand() dan srand()
#include <ctime> //Untuk fungsi time()
using namespace std;

int main() {
	//Menghasilkan angka acak berdasarkan waktu
	srand(time(0));
	int angka_rahasia = rand() & 100 + 1; //Angka acak antara 1 dan 100
	int tebakan;
	int kesempatan = 5; //Jumlah kesempatan menebak
	
	cout << "Selamat datang di game tebak angka!" << endl;
	cout << "Saya sudah memilih angka antara 1 dan 100." << endl;
	cout << "Anda punya " << kesempatan << " kesempatan untuk menebaknya!" << endl;
	
	while (kesempatan > 0) {
		cout << "\nMasukkan tebakan Anda: ";
		cin >> tebakan;
		
		if (tebakan == angka_rahasia) {
			cout << "Selamat! Anda berhasil menebak angkanya!" << endl;
			break;
		} else if (tebakan < angka_rahasia) {
			cout << "Tebakan Anda terlalu rendah." << endl;
		} else {
			cout << "Tebakan Anda terlalu tinggi." << endl;
		}
		
		kesempatan--;
		
		if (kesempatan == 0) {
			cout << "Maaf, kesempatan Anda habis. Angka rahasia adalah " << angka_rahasia << "." << endl;
		} else {
			cout << "Anda punya " << kesempatan << " kesempatan lagi." << endl;
		}
	}
	
	return 0;
}
