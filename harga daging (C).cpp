#include <stdio.h>

//Definisi harga daging per kilogram
#define HARGA_PER_KG 50000 //contoh harga Rp100.000 per kg

int main() {
	float jumlahKg;
	float totalHarga;
	
	//input jumlah kilogram daging yang dibeli
	printf("Masukkan jumlah daging yang dibeli (dalam kg): ");
	scanf("%f", &jumlahKg);
	
	//menghitung total harga
	totalHarga = jumlahKg * HARGA_PER_KG;
	
	//menampilkan hasil perhitungan
	printf("\n--- Informasi Pembelian Daging ---\n");
	printf("Jumlah Daging: %.f kg\n", jumlahKg);
	printf("Harga per kg: Rp%.0f\n", (float)HARGA_PER_KG);
	printf("Total Harga: Rp%.0f\n", totalHarga);
	
	return 0;
}
