#include <stdio.h>

/*
 * 5. 성적관리 프로그램
 *
 * <조건>
 * 1) 과목은 국어, 영어, 수학, 국사만 존재
 * 2) 학생은 철희, 철수, 영희, 영수만 존재
 * 3) 개인별 총점과 과목별 총점을 계산하여 배열에 저장
 *
 * <입력>
 * 점수 입력 ( 국어, 영어, 수학, 국사 순 )
 * 철희 : 5 4 6 5
 * 철수 : 3 6 9 3
 * 영희 : 4 8 2 7
 * 영수 : 3 8 9 7
 *
 * <출력>
 * 		국어	영어	수학	국사	총점
 * 철희 	5	4	6	5	20
 * 철수 	3	6	9	3	21
 * 영희 	4	8	2	7	21	
 * 영수 	3	8	9	7	27
 * 과목별총점	15	26	26	22	89
 */

int sum(int arr[]) {
	int s = 0;
	for (int i=0; i<4; i++) { s += arr[i]; }
	return s;
}

void f_scan(char c[], int* arr) {
	printf("%s : ", c);
	for (int i=0; i<4; i++) { scanf("%d", &arr[i]); }
	arr[4] = sum(arr);
}

void f_total(int* arr, int* a, int* b, int* c, int* d) {
	for (int i=0; i<4; i++) {
		arr[i] = a[i] + b[i] + c[i] + d[i];
	}
	arr[4] = sum(arr);
}

void f_print(char c[], int* arr) {
	printf("%s", c);
	for (int i=0; i<5; i++) {
		printf("\t%d", arr[i]);
	}
	printf("\n");
}

int main(void) {
	int a[5], b[5], c[5], d[5], t[5];

	printf("점수 입력 ( 국어, 영어, 수학, 국사 순 )\n");
	f_scan("철희", a);
	f_scan("철수", b);
	f_scan("영희", c);
	f_scan("영수", d);
	f_total(t, a, b, c, d);

	printf("\t국어\t영어\t수학\t국사\t총점\n");
	f_print("철희", a);
	f_print("철수", b);
	f_print("영희", c);
	f_print("영수", d);
	f_print("과목별총점", t);

	return 0;
}
