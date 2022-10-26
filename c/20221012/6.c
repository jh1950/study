#include <stdio.h>

int main(void) {
	int mode;
	printf("mode : ");
	scanf("%d", &mode);
	
	switch (mode) {
		case 1:
			printf("attack\n");
			break;
		case 2:
			printf("defemce\n");
			break;
		case 3:
			printf("heal\n");
			break;
		default:
			printf("Invalid number\n");
	}
	
	return 0;
}
