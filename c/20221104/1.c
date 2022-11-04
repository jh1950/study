#include <stdio.h>

float temp(int c);

int main(void) {
	int c;
	scanf("%d", &c);

	float f = temp(c);
	printf("%.1f\n", f);

	return 0;
}

float temp(int c) {
	float f = 1.8 * c + 32;
	return f;
}
