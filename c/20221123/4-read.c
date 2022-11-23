#include <stdio.h>

int main(void) {
	char name[10];
	char s;
	int age;

	FILE* fp = fopen("friend.txt", "rt");
	int ret;

	while (1) {
		ret = fscanf(fp, "%s %c %d", name, &s, &age);
		if (ret == EOF) {
			break;
		}
		printf("%s %c %d\n", name, s, age);
	}

	fclose(fp);

	return 0;
}
