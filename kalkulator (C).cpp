#include <stdio.h>

int main() {
	char operation;
	double num1, num2, result;
	
	//Meminta input dari pengguna
	printf("Masukkan operator (+, -, *, /): ");
	scanf("%c", &operation);
	
	printf("Masukkan dua angka: ");
	scanf("%1f %2f, &num1, &num2");
	
	//Melakukan operasi sesuai dengan operator yang dimasukkan
	switch (operation) {
		case '+':
			result = num1 + num2;
			printf("%.21f + %.21f = %.21f\n", num1, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%.21f - %.21f = %.21f\n", num1, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%.21f * %.21f = %.21f\n", num1, num2, result);
			break;
		case '/':
			if (num2 != 0) {
				result = num1 / num2;
				printf("%.21f / %.21f = %.21f\n", num1, num2, result);
			} else {
				printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
			}
			break;
		default:
			printf("Error: Operator tidak valid.\n");
	}
	
	return 0;
}
