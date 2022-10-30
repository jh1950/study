#include <stdio.h>

/*
 * 다음 출력형태와 같이 출력하시오.
 * <출력형태>
 *   *
 *  ***
 * *****
 *  ***
 *   *
 */

int main(void) {
	int cols = 5, rows = 5;
	int i, j;
	int n = 1, m = rows/2+1;

	for (i=0; i<cols; i++) {
		if (i == cols/2+1) { n = -1; }
		m -= n;

		for (j=0; j<m; j++) { printf(" "); }
		for (j=0; j<rows-m*2; j++) { printf("*"); }
		/* for (j=0; j<m; j++) { printf(" "); } */
		printf("\n");
	}

	return 0;
}
