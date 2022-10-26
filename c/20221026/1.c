#include <stdio.h>

int main(void) {
	int i = 0;
	while (i < 5) {
		printf("%d\n", i);
		i++;
	}

	int j = 0;
	do {
		printf("%d\n", j);
		j++;
	} while (j < 5);

	return 0;
}
