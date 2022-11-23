#include <stdio.h>

int main(void) {
	FILE * fp = fopen("test.txt", "wt");
	if (fp == NULL) {
		printf("파일 오픈 실패!");
		return -1;
	}

	fputc('A', fp);
	fputc('b', fp);
	fputs("My name is Hong \n", fp);
	fputs("Yout name is Yoon \n", fp);

	fclose(fp);

	char str[30];
	char ch;

	FILE * fp1 = fopen("test.txt", "rt");
	if (fp1 == NULL) {
		printf("파일 오픈 실패!");
		return -1;
	}

	ch = fgetc(fp1);
	printf("%c \n", ch);
	ch = fgetc(fp1);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp1);
	printf("%s \n", str);
	fgets(str, sizeof(str), fp1);
	printf("%s \n", str);

	fclose(fp1);

	return 0;
}
