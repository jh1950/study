#include <stdio.h>

/*
 * 배열의 이름은 포인트
 */

int main(void) {
	int* ptr;
	int arr[3] = {0, 1, 2};

	ptr = arr;

	printf("배열의 이름 : %p\n", arr);
	printf("첫 번째 요소 : %p\n", &arr[0]);
	printf("두 번째 요소 : %p\n", &arr[1]);
	printf("세 번째 요소 : %p\n", &arr[2]);

	printf("%d %d\n", arr[0], ptr[0]);

	return 0;
}
