#include <stdio.h>

int main() {
	int jumlahPengunjung, usia;
	float totalHarga = 0;
	
	//Input jumlah pengunjung
	printf("Masukkan jumlah pengunjung: ");
	scanf("%d", &jumlahPengunjung);
	
	//Loop input usia dan hitung harga tiket
	for (int i = 1; i <= jumlahPengunjung; i++) {
		printf("Masukkan usia pengunjung ke-%d: ", i);
		scanf("%d", &usia);
		
		//Penentuan harga berdasarkan usia
		totalHarga += (usia < 12) ? 10000 : (usia < 60) ? 20000 : 15000;
	}
	
	//Tampilkan total harga
	printf("Total harga tiket: Rp%.f\n", totalHarga);
	
	return 0;
}
