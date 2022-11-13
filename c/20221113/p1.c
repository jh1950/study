#include <stdio.h>

/*
 * 길이가 5인 int형 배열 arr을 선언하고, 1, 2, 3, 4, 5로 초기화한다.
 * 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언한다.
 * ptr에 저장된 값을 감소시키면서 모든 배열 요소에 접근하고 배열에 저장된 모든 정수를 더하는 프로그램
 *
 * <출력>
 * 15
 */

int main(void) {
	int arr[5] = {1, 2, 3, 4, 5};
	int* ptr = &arr[4];

	int i, sum = 0;
	for (i = 0; i < 5; i++) {
		sum += *ptr;
		ptr--;
	}
	printf("%d\n", sum);

	return 0;
}
