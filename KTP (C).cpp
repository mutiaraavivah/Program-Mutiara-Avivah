#include <stdio.h>
#include <string.h>

//Mendefinisikan struct untuk menyimpan data KTP
struct KTP {
	char nama[50];
	char nik[20];
	char tempatLahir[50];
	char tanggalLahir[50];
	char jenisKelamin[20];
	char alamat[100];
	char agama[20];
	char statusPerkawinan[20];
	char pekerjaan[50];
};

int main() {
	struct KTP penduduk;
	
	//Input data KTP
	printf("Masukkan Nama              : ");
	fgets(penduduk.nama, 50, stdin);
	penduduk.nama[strcspn(penduduk.nama, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan NIK               : ");
	fgets(penduduk.nik, 20, stdin);
	penduduk.nik[strcspn(penduduk.nik, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan Tempat Lahir      : ");
	fgets(penduduk.tempatLahir, 50, stdin);
	penduduk.tempatLahir[strcspn(penduduk.tempatLahir, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan Tanggal Lahir     : ");
	fgets(penduduk.tanggalLahir, 15, stdin);
	penduduk.tanggalLahir[strcspn(penduduk.tanggalLahir, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan Jenis Kelamin     : ");
	fgets(penduduk.jenisKelamin, 20, stdin);
	penduduk.jenisKelamin[strcspn(penduduk.jenisKelamin, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan Alamat            : ");
	fgets(penduduk.alamat, 100, stdin);
	penduduk.alamat[strcspn(penduduk.alamat, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan Agama             : ");
	fgets(penduduk.agama, 20, stdin);
	penduduk.agama[strcspn(penduduk.agama, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan Status Perkawinan : ");
	fgets(penduduk.statusPerkawinan, 20, stdin);
	penduduk.statusPerkawinan[strcspn(penduduk.statusPerkawinan, "\n")] = 0; //Menghilangkan karakter newline
	
	printf("Masukkan Pekerjaan         : ");
	fgets(penduduk.pekerjaan, 50, stdin);
	penduduk.pekerjaan[strcspn(penduduk.pekerjaan, "\n")] = 0; //Menghilangkan karakter newlne
	
	//Menampilkan data KTP
	printf("\n--- Informasi KTP ---\n");
	printf("Nama              : %s\n", penduduk.nama);
	printf("NIK               : %s\n", penduduk.nik);
	printf("Tempat Lahir      : %s\n", penduduk.tempatLahir);
	printf("Tanggal Lahir     : %s\n", penduduk.tanggalLahir);
	printf("Jenis Kelamin     : %s\n", penduduk.jenisKelamin);
	printf("Alamat            : %s\n", penduduk.alamat);
	printf("Agama             : %s\n", penduduk.agama);
	printf("Status Perkawinan : %s\n", penduduk.statusPerkawinan);
	printf("Pekerjaan         : %s\n", penduduk.pekerjaan);
	
	return 0;
}
