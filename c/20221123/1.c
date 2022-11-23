#include <stdio.h>

int main(void) {
	/*
	 * FILe * fopen(const char* filename, const char* mode);
	 * 성공 시 FILE 구조체 변수의 주소 값, 실패 시 NULL 포인터 반환
	 */
	FILE * fp1 = fopen("test.txt", "wt");
	// r(read), w(write), a(?)
	// t(text), b(binary)
	// r+, w+ == rw
	// r+ : 파일이 존재하지 않으면 에러

	fputc('A', fp1); /* fputs, fprintf, ... */

	/*
	 * fflush( ... );
	 * - 출력 버퍼 비움 (= 보냄)
	 */

	/*
	 * int fclose(FILE* stream);
	 * 성공 시 0, 실패 시 EOF를 반환
	 */
	fclose(fp1);



	FILE * fp2 = fopen("test.txt", "rt");

	char ch = fgetc(fp2);
	printf("%c\n", ch);

	fclose(fp2);

	return 0;
}
