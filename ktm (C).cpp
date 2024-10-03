#include <stdio.h>

//Definisi struktur data untuk kartu mahasiswa
struct KartuMahasiswa {
	char nama[100];
	char NIM[20];
	char jurusan[50];
	int tahunMasuk;
};

int main() {
	//Deklarasi variabel kartu mahasiswa
	struct KartuMahasiswa mahasiswa;
	
	//Meminta input dari pengguna
	printf("Masukkan Nama: ");
	fgets(mahasiswa.nama, sizeof(mahasiswa.nama), stdin);
	
	printf("Masukkan NIM: ");
	fgets(mahasiswa.NIM, sizeof(mahasiswa.NIM), stdin);
	
	printf("Masukkan Juruan: ");
	fgets(mahasiswa.jurusan, sizeof(mahasiswa.jurusan), stdin);
	
	printf("Masukkan Tahun Masuk: ");
	scanf("%d", &mahasiswa.tahunMasuk);
	
	//Menampilkan data mahasiswa
	printf("\n--- Kartu Mahasiswa ---\n");
	printf("Nama          : %s", mahasiswa.nama);
	printf("NIM           : %s", mahasiswa.NIM);
	printf("Jurusan       : %s", mahasiswa.jurusan);
	printf("Tahun Masuk   : %d\n", mahasiswa.tahunMasuk);
	
	return 0;
}
