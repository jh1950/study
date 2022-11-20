#include <stdio.h>
#include <math.h> /* gcc -lm */

struct point {
	int xpos;
	int ypos;
};

int main(void) {
	double distance;
	struct point pos1;
	struct point pos2;

	printf("점 1번의 좌표 : ");
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	printf("점 2번의 좌표 : ");
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos2.xpos - pos1.xpos) * (pos2.xpos - pos1.xpos) + (pos2.ypos - pos1.ypos) * (pos2.ypos - pos1.ypos)));

	printf("두 점의 거리는 %lf입니다.\n", distance);

	return 0;
}
