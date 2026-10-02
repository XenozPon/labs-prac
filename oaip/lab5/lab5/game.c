#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 10
#define MAX_POWER 10
#define HIGHT_TRUNC 3
#define NUM_LINES 10

struct Line {
	int length;
	int power;
};

struct Line lines[NUM_LINES] = {
	{5, 8}, {5, 8}, {5, 8}, {5, 8}, {5, 8},
	{5, 8}, {5, 8}, {5, 8}, {5, 8}, {5, 8}
};

int resources = 50;

void printElement(int power) {
	if (power <= 3) {
		printf("\033[31m");
	}
	else if (power <= 6) {
		printf("\033[33m");
	}
	else {
		printf("\033[32m");
	}
	printf("#");
	printf("\033[0m");
}

void printGameField() {
	printf("Баланс: %d ресурсов\n", resources);
	int i = 0;
	while (i < NUM_LINES) {
		int empty_pos = MAX_LENGTH - lines[i].length;
		int pos = 0;
		while (pos < empty_pos) {
			printf(" ");
			pos++;
		}
		while (pos < MAX_LENGTH) {
			printElement(lines[i].power);
			pos++;
		}
		if (lines[i].length != 0) {
			printf("[%d]", i);
		}
		else {
			if (lines[i].power > 0) {
				printf(" * ");
			}
			else {
				printf(" X ");
			}
		}
		while (pos < MAX_LENGTH + lines[i].length) {
			printElement(lines[i].power);
			pos++;
		}
		printf("\n");
		i++;
	}
	while (i < NUM_LINES + HIGHT_TRUNC) {
		int pos = 0;
		while (pos < MAX_LENGTH) {
			printf(" ");
			pos++;
		}
		printf("###\n");
		i++;
	}
}

void doAutoStep() {
	if (rand() % 3 == 0) {
		int nline = rand() % NUM_LINES;
		lines[nline].power -= 2;
		if (lines[nline].power < 0) {
			lines[nline].power = 0;
		}
		printf("command = <D> line = <%d>\n", nline);
	}
	int i = 0;
	while (i < NUM_LINES) {
		if (lines[i].power < MAX_POWER / 4) {
			lines[i].length -= 2;
		}
		if (lines[i].power < MAX_POWER / 2) {
			lines[i].length--;
		}
		if (lines[i].length < 0) {
			lines[i].length = 0;
		}
		i++;
	}
}

int checkGameEnd() {
	int allDead = 1;
	int allGrown = 1;
	int i = 0;
	while (i < NUM_LINES) {
		if (lines[i].power > 0) {
			allDead = 0;
		}
		if (lines[i].length < 6) {
			allGrown = 0;
		}
		i++;
	}
	if (allDead) return -1;
	if (allGrown) return 1;
	return 0;
}

int lab5_2_game() {
	char playAgain = 'Y';

	do {
		for (int i = 0; i < NUM_LINES; i++) {
			lines[i].length = 5;
			lines[i].power = 8;
		}
		resources = 50;

		printf("\n=== НОВАЯ ИГРА ===\n");
		srand((unsigned int)time(NULL));

		char command;
		char line;

		do {
			printGameField();
			printf("Цены: T=1, F=2, P=3, K=0, S=10  |  Баланс: %d\n", resources);
			printf("Command: [T]reat / [F]eed / [P]rune / [K]ill / [S]uper / [E]xit\n");

			scanf_s(" %c%c", &command, 1, &line, 1);
			printf("command = <%c> line = <%c>\n", command, line);

			if (line >= '0' && line <= '9') {
				int nline = line - '0';

				switch (command) {
				case 'T':
					if (resources < 1) {
						printf("Недостаточно ресурсов!\n");
						break;
					}
					if (lines[nline].power < MAX_POWER) {
						lines[nline].power++;
						resources -= 1;
					}
					break;

				case 'F':
					if (resources < 2) {
						printf("Недостаточно ресурсов!\n");
						break;
					}
					if (lines[nline].length < MAX_LENGTH) {
						lines[nline].length++;
						resources -= 2;
					}
					break;

				case 'P':
					if (resources < 3) {
						printf("Недостаточно ресурсов!\n");
						break;
					}
					lines[nline].length = 0;
					lines[nline].power = 8;
					resources -= 3;
					printf("-> Ветка %d обрезана и восстановлена!\n", nline);
					break;

				case 'K':
					lines[nline].length = 0;
					lines[nline].power = 0;
					printf("-> Ветка %d просто отрезана и погибла!\n", nline);
					break;

				case 'S':
					if (resources < 10) {
						printf("Недостаточно ресурсов!\n");
						break;
					}
					lines[nline].power = MAX_POWER;
					lines[nline].length += 3;
					if (lines[nline].length > MAX_LENGTH) {
						lines[nline].length = MAX_LENGTH;
					}
					resources -= 10;
					printf("-> Супер зелье применено к ветке %d!\n", nline);
					break;
				}
			}

			doAutoStep();

			int gameStatus = checkGameEnd();
			if (gameStatus == 1) {
				printf("\n*** ПОБЕДА! Все ветки выросли до 60%! ***\n");
				break;
			}
			else if (gameStatus == -1) {
				printf("\n*** ПОРАЖЕНИЕ! Все ветки погибли! ***\n");
				break;
			}
			else if (resources <= 0) {
				printf("\n*** ПОРАЖЕНИЕ! Ресурсы закончились! ***\n");
				break;
			}

		} while (command != 'E');

		printf("\nИгра завершена. Сыграть еще раз? (Y/N): ");
		scanf_s(" %c", &playAgain, 1);

	} while (playAgain == 'Y' || playAgain == 'y');

	printf("\nBye!\n\n\n");
	return 0;
}