#include <stdio.h>
#define PI 3.14

/*
 * Call by Reference
 */

void SimpleFunc(int* age) {
	*age += 1;
	(*age)++;
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
	int age = 17;
	SimpleFunc(&age);
	printf("%d\n", age);

	int a = 1, b = 2;
	swap(&a, &b);
	printf("%d %d\n", a, b);

	const int c = 1;

	return 0;
}
