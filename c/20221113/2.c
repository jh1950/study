#include <stdio.h>

/*
 * 문자열과 포인터
 */
 
int main(void) {
	char str1[] = "Hello, World";
	char* str2 = "Hello, World";

	printf("%s %s\n", str1, str2);

	str2 = "Our String";
	printf("%s %s\n", str1, str2);

	str1[0] = 'x';
	str2[0] = 'x'; // Error
	printf("%s %s\n", str1, str2);

	return 0;
}
