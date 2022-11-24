#include <stdio.h>

int main(void) {
	FILE* fp = fopen("./test.txt", "rt"); /* 파일 내용 : abcdefghijklmnop (마지막에 줄바꿈 없음) */

	/*
	 * ftell(fp);
	 * - 몇 글자 읽었는지 반환
	 */

	printf("%ld\n", ftell(fp)); /* 0 */

	printf("%c\n", fgetc(fp)); /* a */
	printf("%c\n", fgetc(fp)); /* b */
	printf("%ld\n", ftell(fp)); /* 2 */

	fseek(fp, 2, SEEK_CUR);
	printf("%ld\n", ftell(fp)); /* 4 */

	fseek(fp, 0, SEEK_END);
	printf("%ld\n", ftell(fp)); /* 16 */

	fclose(fp);

	return 0;
}
