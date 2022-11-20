#include <stdio.h>

/*
 * 4. 버블 정렬 알고리즘
 * 길이가 5인 배열을 선언하고, 5개의 정수를 입력받아 오름차순, 내림차순으로 정렬하는 프로그램 ( 정렬 알고리즘은 버블 정렬을 사용 )
 *
 * <조건>
 * 1) 정수 입력은 main함수에서 한다.
 * 2) 정렬은 오름차순과 내림차순 각각 함수를 만들어서 한다.
 *
 * <입력>
 * 배열 입력 : 1 3 5 4 2
 *
 * <출력>
 * 오름차순 : 1 2 3 4 5
 * 내림차순 : 5 4 3 2 1
 */

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int* arr, int n) {
	if (n <= 0) { return; }
	for (int i=0; i<n-1; i++) {
		if (arr[i] > arr[i+1]) {
			swap(&arr[i], &arr[i+1]);
		}
	}
	sort(arr, n-1);
}
void sort_rev(int* arr, int n) {
	if (n <= 0) { return; }
	for (int i=0; i<n-1; i++) {
		if (arr[i] < arr[i+1]) {
			swap(&arr[i], &arr[i+1]);
		}
	}
	sort_rev(arr, n-1);
}

int main(void) {
	int arr[5];
	printf("배열 입력 : ");
	for (int i=0; i<5; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, 5);
	printf("오름차순 :");
	for (int i=0; i<5; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");

	sort_rev(arr, 5);
	printf("내림차순 :");
	for (int i=0; i<5; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");

	return 0;
}
