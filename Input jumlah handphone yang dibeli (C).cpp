#include <stdio.h>

int main() {
	int jumlah;
	float harga_per_handphone, total_harga;
	
	//Input jumlah handphone yang dibeli
	printf("Masukkan jumlah handphone yang dibeli: ");
	scanf("%d", &jumlah);
	
	//Input harga per laptop
	printf("Masukkan harga per handphone: ");
	scanf("%f", &harga_per_handphone);
	
	//Menghitung total harga
	total_harga = jumlah * harga_per_handphone;
	
	//Output total harga
	printf("Total harga pembelian: %.2f\n", total_harga);
	
	return 0;
}
