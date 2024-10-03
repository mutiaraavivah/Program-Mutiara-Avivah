#include <stdio.h>

int main(){
	float bil1, bil2;
	float hasilTambah, hasilKurang, hasilKali, hasilBagi;
	
	//Input dua bilangan real dari pengguna
	printf("Masukkan bilangan real pertama: ");
	scanf("%f", &bil1);
	printf("Masukkan bilangan real kedua: ");
	scanf("%f", &bil2);
	
	//Melakukan operasi matematika dasar
	hasilTambah = bil1 + bil2;
	hasilKurang = bil1 - bil2;
	hasilKali = bil1 * bil2;
	
	//Pastikan bil2 bukan nol sebelum melakukan pembagian
	if(bil2 != 0) {
		hasilBagi = bil1 / bil2;
	} else {
		printf("Error: Pembagian dengan nol tidak diizinkan.\n");
		return 1;
	}
	
	//Menampilkan hasil operasi
	printf("\n--- Hasil Operasi ---\n");
	printf("Penjumlahan: %.f + %.f = %.f\n", bil1, bil2, hasilTambah);
	printf("Pengurangan: %.f - %.f = %.f\n", bil1, bil2, hasilKurang);
	printf("Perkalian: %.f * %.f = %.f\n", bil1, bil2, hasilKali);
	printf("Pembagian: %.f / %.f = %.f", bil1, bil2, hasilBagi);
	
	return 0;
}
