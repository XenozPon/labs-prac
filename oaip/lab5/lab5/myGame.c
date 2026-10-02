int lab5_3_game() {
    int board[3][3];
    int row, col;
    int win;
    int full;
    char again;
    int i, j;
    do {
        i = 0;
        while (i < 3) {
            j = 0;
            while (j < 3) {
                board[i][j] = 0;
                j++;
            }
            i++;
        }
        printf("Вы играете за X, компьютер за O\n");
        printf("Ввод: строка и столбец (1-3)\n");
        win = 0;
        full = 0;

        while (!win && !full) {
            printf("\n");
            i = 0;
            while (i < 3) {
                j = 0;
                while (j < 3) {
                    if (board[i][j] == 0) printf(" . ");
                    else if (board[i][j] == 1) printf(" X ");
                    else printf(" O ");
                    j++;
                }
                printf("\n");
                i++;
            }

            printf("Ваш ход (строка столбец): ");
            scanf_s("%d %d", &row, &col);

            if (row < 1 || row > 3 || col < 1 || col > 3) {
                printf("Неверные координаты!\n");
                continue;
            }

            row--;
            col--;

            if (board[row][col] != 0) {
                printf("Клетка занята!\n");
                continue;
            }

            board[row][col] = 1;

            if ((board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 1) ||
                (board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 1) ||
                (board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 1) ||
                (board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 1) ||
                (board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 1) ||
                (board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 1) ||
                (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1) ||
                (board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1)) {
                win = 1;
                printf("\nВы выиграли!\n");
                break;
            }

            full = 1;
            i = 0;
            while (i < 3) {
                j = 0;
                while (j < 3) {
                    if (board[i][j] == 0) full = 0;
                    j++;
                }
                i++;
            }

            if (full) {
                printf("\nНичья!\n");
                break;
            }

            int cr, cc;
            do {
                cr = rand() % 3;
                cc = rand() % 3;
            } while (board[cr][cc] != 0);

            board[cr][cc] = 2;
            printf("Компьютер: [%d][%d]\n", cr + 1, cc + 1);

            if ((board[0][0] == 2 && board[0][1] == 2 && board[0][2] == 2) ||
                (board[1][0] == 2 && board[1][1] == 2 && board[1][2] == 2) ||
                (board[2][0] == 2 && board[2][1] == 2 && board[2][2] == 2) ||
                (board[0][0] == 2 && board[1][0] == 2 && board[2][0] == 2) ||
                (board[0][1] == 2 && board[1][1] == 2 && board[2][1] == 2) ||
                (board[0][2] == 2 && board[1][2] == 2 && board[2][2] == 2) ||
                (board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 2) ||
                (board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 2)) {
                win = 1;
                printf("\nКомпьютер выиграл!\n");
            }
        }

        printf("\nСыграть еще раз? (Y/N): ");
        scanf_s(" %c", &again, 1);

    } while (again == 'Y' || again == 'y');

    return 0;
}