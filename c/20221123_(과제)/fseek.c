#include <stdio.h>

int main(void) {
	FILE* fp = fopen("./test.txt", "rt"); /* 파일 내용 : abcdefghijklmnop (마지막에 줄바꿈 없음) */

	/*
	 * fseek(fp, offset, SEEK_SET);
	 * - 파일의 처음에서부터 offset만큼 이동한다.
	 *
	 * fseek(fp, offset, SEEK_CUR);
	 * - 현재 위치로부터 offset만큼 이동한다.
	 *
	 * fseek(fp, offset, SEEK_END);
	 * - 파일의 끝에서부터 offset만큼 이동한다.
	 */

	printf("%c\n", fgetc(fp)); /* a */
	printf("%c\n", fgetc(fp)); /* b */

	fseek(fp, 2, SEEK_CUR); /* 현재 위치에서 2번 건너뜀 */
	printf("%c\n", fgetc(fp)); /* e */

	fseek(fp, 2, SEEK_SET); /* 처음 위치로 돌아온 후 2번 건너뜀 */
	printf("%c\n", fgetc(fp)); /* c */

	fseek(fp, -2, SEEK_END); /* 마지막 위치에서 2번 돌아옴 */
	printf("%c\n", fgetc(fp)); /* o */

	fclose(fp);

	return 0;
}
