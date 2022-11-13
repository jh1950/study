#include <stdio.h>

/*
 * 길이가 6인 int형 배열 arr2를 선언하고, 1,2,3,4,5,6으로 초기화한다.
 * 배열에 저장된 값의 순서가 반대가 되도록 하는 프로그램
 * (단, 포인터 변수 2개를 활용하여 풀어야 한다) 
 * {1, 2, 3, 4, 5, 6} -> {6, 5, 4, 3, 2, 1}
 */

int main(void) {
	int arr2[6] = {1, 2, 3, 4, 5, 6};
	int* ptr1 = arr2;
	int* ptr2 = &arr2[5];

	for (int i=0; i<3; i++) {
		int a = *(ptr1+i);
		int b = *(ptr2-i);
		arr2[i] = b;
		arr2[5-i] = a;
	}

	printf("%d %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	return 0;
}
