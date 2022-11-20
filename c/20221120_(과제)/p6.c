#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 6. 숫자 야구 게임
 *
 * <게임 규칙>
 * 1) 플레이어는 3개( 0 ~ 9 )의 숫자를 입력한다. ( 컴퓨터는 랜덤한 숫자 3개(중복 X)를 이미 선택한 상태 )
 * 2) 숫자와 자리를 모두 맞혔다면 strike
 * 3) 숫자만 맞고, 자리가 틀리다면 ball
 * 4) 숫자와 자리 모두 틀렸다면 out
 * 5) 플레이어가 컴퓨터가 선택한 숫자를 모두 맞히면 플레이어 승리
 *
 * <출력(예시)> - 컴퓨터가 고른 숫자 : 2 0 8
 * 3개의 숫자 선택 : 1 2 8
 * 1번째 도전 결과 : 1 strike 1 ball 0 out
 * 3개의 숫자 선택 : 3 0 8
 * 2번째 도전 결과 : 2 strike 0 ball 1 out
 * 3개의 숫자 선택 : 2 0 8
 * 3번째 도전 결과 : 3 strike 0 ball 0 out
 * Player Win!
 * Game Over!
 */

int arr[3];

int game_play() {
	int result = 0;
	int loop = 10;

	int nums[3];
	for (int n=0; n<loop; n++) {
		printf("3개의 숫자 선택 : ");
		for (int i=0; i<3; i++) {
			scanf("%d", &nums[i]);
		}

		int sbo[3] = {0, 0, 0};
		for (int i=0; i<3; i++) {
			if (arr[i] == nums[i]) { sbo[0]++; }
			else {
				for (int j=0; j<3; j++) {
					if (i == j) { continue; }
					else if (arr[i] == nums[j]) { sbo[1]++; }
				}
			}
		}
		sbo[2] = 3 - sbo[0] - sbo[1]*2;

		printf("%d번째 도전 결과 : ", n+1);
		printf("%d strike ", sbo[0]);
		printf("%d ball ", sbo[1]);
		printf("%d out\n", sbo[2]);

		if (sbo[0] == 3) {
			result = 1;
			break;
		}
	}

	return result;
}

int main(void) {
	srand(time(NULL));

	int i = 0;
	while (i < 3) {
		int n = rand() % 9;
		int j = 0;
		for (j=0; j<i; j++) {
			if (arr[j] == n) {
				j = -1;
				break;
			}
		}
		if (j == -1) { continue; }

		arr[i] = n;
		i++;
	}

	if (game_play()) { printf("Player Win!"); }
	else { printf("Player Lose!"); }
	printf("\nGame Over!\n");

	return 0;
}
