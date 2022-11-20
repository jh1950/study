#include <stdio.h>

/*
 * 2. 10진수 형태로 정수를 하나 입력 받은 다음, 이를 2진수로 변환하는 프로그램
 * <입력>
 * 10진수 정수 입력: 12
 *
 * <출력>
 * 1100
 */

int power(int n, int m) {
	int p = n;
	if (m == 0) {
		p = 1;
	} else {
		for (int i=1; i<m; i++) { p *= n; }
	}
	return p;
}

void to_binary(int n) {
	int i = 0;
	while (1) {
		if (n < power(2, i)) { break; }
		i++;
	}

	for (int j=i; 0<j; j--) {
		int p = power(2, j-1);
		if (p <= n) {
			printf("1");
			n -= p;
		} else {
			printf("0");
		}
	}
	printf("\n");
}

int main(void) {
	int n;
	printf("10진수 정수 입력: ");
	scanf("%d", &n);

	to_binary(n);

	return 0;
}
