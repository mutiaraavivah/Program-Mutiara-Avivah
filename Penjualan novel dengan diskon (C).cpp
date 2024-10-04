#include <stdio.h>

int main() {
	int jumlah_novel;
	float harga_per_novel, total_harga, diskon, harga_setelah_diskon;
	
	//Input jumlah novel yang ingin dibeli
	printf("Masukkan jumlah novel yang ingin dibeli: ");
	scanf("%d", &jumlah_novel);
	
	//Input harga novel
	printf("Masukkan harga per novel: ");
	scanf("%f", &harga_per_novel);

	//Menghitung total harga
	total_harga = jumlah_novel * harga_per_novel;
	
	//Input diskon
	printf("Masukkan diskon (dalam persen): ");
	scanf("%f", &diskon);
	
	//Menghitung harga setelah diskon
	harga_setelah_diskon = total_harga - (total_harga * diskon/100);
	
	//Output total harga
	printf("Total harga pembelian: %.2f\n", total_harga);
	printf("Harga setelah diskon: %.2f\n", harga_setelah_diskon);
	
	return 0; 
}
