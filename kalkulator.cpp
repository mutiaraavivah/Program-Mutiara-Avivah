#include <iostream>
using namespace std;

int main() {
	float num1, num2, result;
	int choice;
	
	//Input angka
	cout << "Masukkan angka pertama: ";
	cin >> num1;
	cout << "Masukkan angka kedua: ";
	cin >> num2;
	
	//Menampilkan pilihan operasi
	cout << "Pilihan operasi:\n";
	cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n";
	cout << "Masukkan pilihan (1/2/3/4): ";
	cin >> choice;
	
	//Melakukan pilihan operasi sesuai pulihan
	switch (choice) {
		case 1:
			result = num1 + num2;
			cout << "Hasil: " << result << endl;
			break;
		case 2:
			result = num1 - num2;
			cout << "Hasil: " << result << endl;
			break;
		case 3:
			result = num1 * num2;
			cout << "Hasil: " << result << endl;
			break;
		case 4:
			if (num2 != 0) {
				result = num1 / num2;
				cout << "Hasil: " << result << endl;
			} else {
				cout << "Error: Tidak bisa dibagi dengan nol\n";
			}
			break;
		default:
			cout << "Pilihan tidak valid.\n";
	}
	
	return 0;
}
