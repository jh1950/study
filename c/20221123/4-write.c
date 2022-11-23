#include <stdio.h>

int main(void) {
	char name[10];
	char s;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i<3; i++) {
		printf("이름 성별 나이 순 입력 : ");
		scanf("%s %c %d", name, &s, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, s, age);
	}

	fclose(fp);

	return 0;
}
