#include <stdio.h>

/*
 * 포인터 배열
 */
 
int main(void) {
	int n1 = 10, n2 = 20, n3 = 30;
	int* arr[3] = {&n1, &n2, &n3};

	printf("%d\n", *arr[0]);
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);

	return 0;
}
