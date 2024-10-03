#include <stdio.h>
#include <math.h>

int main() {
	double num, result;
	printf("Masukkan angka: ");
	scanf("%lf",&num);
	result = sqrt(num);
	printf("Akar kuadrat dari %.lf adalah %.lf\n", num, result);
	return 0;
}
