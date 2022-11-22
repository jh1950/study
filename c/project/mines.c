#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "getch.h"

const int x_min = 5, x_max = 100;
const int y_min = 5, y_max = 100;
const int xs[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
const int ys[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

struct xy { int x, y; };
struct xy size;
int mine_cnt = 0;
int open_cnt = 0;





void error() {
	printf("Error\n");
}

void init_info(void) {
	printf("\n");
	printf("* * * * * * * * Mines * * * * * * * *\n");
	printf("\n");
	printf("난이도	: 0(초급), 1(중급), 2(고급)\n");
	printf("크기	: 가로x세로 (ex. 5x5)\n");
	printf("	  %d <= 가로 <= %d\n", x_min, x_max);
	printf("	  %d <= 세로 <= %d\n", y_min, y_max);
	printf("\n");
	printf("* * * * * * * * * * * * * * * * * * *\n");
	printf("\n");
}

int init() {
	int game_level = 0;
	printf("난이도 : ");
	scanf("%d", &game_level);
	if (game_level < 1 || 3 < game_level) {
		return 1;
	}

	size.x = 0; size.y = 0;
	printf("크기 : ");
	scanf("%dx%d", &size.x, &size.y);
	if (size.x < x_min || size.x > x_max || size.y < y_min || size.y > y_max) {
		return 1;
	}

	if (game_level == 1) { mine_cnt = (size.x*size.y) * (12.3/100); }
	else if (game_level == 2) { mine_cnt = (size.x*size.y) * (15.6/100); }
	else if (game_level == 3) { mine_cnt = (size.x*size.y) * (20.6/100); }
	mine_cnt++;

	return 0;
}

void board_zero(int board[size.y][size.x]) {
	for (int y=0; y<size.y; y++) {
		for (int x=0; x<size.x; x++) {
			board[y][x] = 0;
		}
	}
}

void board_init(int board[size.y][size.x]) {
	struct xy mine[mine_cnt];
	struct xy mine_;

	int i = 0;
	srand(time(NULL));
	while (i < mine_cnt) {
		mine_.x = rand() % size.x;
		mine_.y = rand() % size.y;

		int j = 0;
		for (j=0; j<i; j++) {
			if (mine[j].x == mine_.x && mine[j].y == mine_.y) {
				j = -1;
				break;
			}
		}
		if (j == -1) { continue; }

		mine[i].x = mine_.x;
		mine[i].y = mine_.y;
		i++;
	}

	for (i=0; i<mine_cnt; i++) {
		mine_.x = mine[i].y;
		mine_.y = mine[i].x;
		for (int j=0; j<8; j++) {
			int x = mine_.x + xs[j];
			int y = mine_.y + ys[j];
			if (x < 0 || size.x <= x || y < 0 || size.y <= y) { continue; }
			board[y][x]++;
		}
	}
	for (i=0; i<mine_cnt; i++) {
		mine_.x = mine[i].y;
		mine_.y = mine[i].x;
		board[mine_.y][mine_.x] = -9;
	}
}

int board_print(char type[], int board[size.y][size.x], int x, int y) {
	struct xy pos = {x, y};

	printf("\n");
	printf("\n");
	printf("\n");
	for (int i=0; i<size.x+3; i++) { printf("* "); }
	printf("\n");
	printf("\n");
	printf("┌ ");
	for (int i=0; i<pos.x; i++) { printf("  "); }
	if (pos.x != -1) { printf("↓ "); }
	for (int i=0; i<size.x-(pos.x+1); i++) { printf("  "); }
	printf(" ┐\n");

	int result = 0;
	for (int y=0; y<size.y; y++) {
		if (pos.y == y) { printf("→ "); }
		else { printf("  "); }

		for (int x=0; x<size.x; x++) {
			int n = board[y][x];
			if (n == 0) {
				if (type == "board") { printf("  "); }
				else { printf("■ "); }
			}
			else if (0 < n && n < 9) { printf("%d ", n); }
			else if (n == 9) { printf("  "); }
			else if (n == -9) { printf("※ "); result = 2; }
			else if (type != "board") {
				if (n == -1) { printf("⊙ "); }
				else if (n == -2) { printf("□ "); }
			}
		}

		if (pos.y == y) { printf("←"); }
		printf("\n");
	}

	printf("└ ");
	for (int i=0; i<pos.x; i++) { printf("  "); }
	if (pos.x != -1) { printf("↑ "); }
	for (int i=0; i<size.x-(pos.x+1); i++) { printf("  "); }
	printf(" ┘\n");

	return result;
}

void open(int board[size.y][size.x], int play[size.y][size.x], int x, int y) {
	int n = board[y][x];
	if (play[y][x] != n) { open_cnt++; play[y][x] = n; }
	if (n == 0) {
		open_cnt++;
		board[y][x] = 9;
		play[y][x] = 9;
		for (int i=0; i<8; i++) {
			struct xy next = {x+xs[i], y+ys[i]};
			if (next.x < 0 || size.x <= next.x || next.y < 0 || size.y <= next.y) {
				continue;
			}
			open(board, play, next.x, next.y);
		}
	}
}

int run(int board[size.y][size.x], int play[size.y][size.x]) {	
	char k;
	int result = 0;
	int flag_cnt = 0;
	struct xy pos = {0, 0};

	while (1) {
		result = board_print("", play, pos.x, pos.y);
		if (result) { break; }
		if (size.x*size.x-mine_cnt == open_cnt) { result = 1; break; }

		printf("\n");
		printf("  Mines: %d/%d\n", flag_cnt, mine_cnt);
		printf("		n : Select\n");
		printf("    w		m : Mark\n");
		printf("  a s d		j : Check\n");
		printf("		q : Quit\n");
		printf("\n");

		k = getch();
		if (k == 'q') {
			printf("Quit? [y/N] : ");
			char q = getch();
			printf("%c", q);
			if (q == 'y') {
				break;
			}
		} else if (strchr("wasd", k)) {
			if (k == 'w') { pos.y--; }
			else if (k == 's') { pos.y++; }
			else if (k == 'a') { pos.x--; }
			else if (k == 'd') { pos.x++; }

			if (pos.x < 0) { pos.x = size.x-1; }
			else if (size.x <= pos.x) { pos.x = 0; }
			if (pos.y < 0) { pos.y = size.y-1; }
			else if (size.y <= pos.y) { pos.y = 0; }
		} else if (strchr("nmj", k)) {
			int n = play[pos.y][pos.x];
			if (k == 'n') {
				if (n == 0) { open(board, play, pos.x, pos.y); }
			} else if (k == 'j') {
				if (0 < n && n < 9) {
					int check = 0;
					struct xy a;
					for (int i=0; i<8; i++) {
						a.x = pos.x+xs[i];
						a.y = pos.y+ys[i];
						if (a.x < 0 || size.x <= a.x || a.y < 0 || size.y <= a.y) { continue; }
						if (play[a.y][a.x] == -1) { check++; }
					}
					if (n != check) { continue; }
					for (int i=0; i<8; i++) {
						a.x = pos.x+xs[i];
						a.y = pos.y+ys[i];
						if (a.x < 0 || size.x <= a.x || a.y < 0 || size.y <= a.y) { continue; }
						if (play[a.y][a.x] == -1) { continue; }
						open(board, play, a.x, a.y);
					}
				}
			} else if (k == 'm') {
				if (-2 <= n && n <= 0) {
					n = (n-1)%3;
					if (n == -1) { flag_cnt++; }
					if (n == -2) { flag_cnt--; }
					play[pos.y][pos.x] = n;
				}
			}
		}
	}

	return result;
}


void game_over(e) {
	if (e) {
		if (e == 1) { printf("Success!"); }
		else if (e == 2) { printf("Boom!"); }
		printf("\nGame Over\n");
	} else { printf("Quit\n"); }
}





int main(void) {
	init_info();
	if (init()) { error(); return 1; }

	int board[size.y][size.x];
	board_zero(board);
	board_init(board);

	int play[size.y][size.x];
	board_zero(play);

	int result = run(board, play);
	board_print("board", board, -1, -1);
	game_over(result);

	return 0;
}
