#include <stdio.h>

/*
 * 변수 num에 값을 입력받고 다음 조건에 맞도록 프로그램을 작성하세요.
 *
 * <조건>
 * num이 50 이상이면 '50 이상'을 출력하고,
 * num이 50 미만이면 '50 미만'을 출력
 *
 * <출력 형태>
 * num값을 입력하세요 : 51
 * 당신이 입력한 값은 51입니다.
 * 50 이상
 */

int main(void) {
	int num;
	
	printf("num 값을 입력하세요 : ");
	scanf("%d", &num);
	
	printf("당신이 입력한 값은 %d입니다.\n", num);
	if (50 <= num) {
		printf("50 이상\n");
	} else {
		printf("50 미만\n");
	}

	return 0;
}
