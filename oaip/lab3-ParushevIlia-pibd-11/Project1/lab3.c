#include <stdio.h>
//3.1
//void main() {
//	SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//	printf("Введите опцию\n");
//	int n;
//	do {
//		printf("\n\n1 - числа от 1 до 10 \n");
//		printf("2 - числа от 10 до 1  \n");
//		printf("3 - 5 первых нечетных чисел  \n");
//		printf("11 - вывести числа от 100 до 10 с шагом 10 \n");
//		printf("12 - вывести числа от 1000 до 100 с шагом 100 \n");
//		printf("13 - вывести изменение счета за 10 лет \n");
//		printf("20 - числа от 1000 до 0 с шагом N \n");
//		printf("21 - N первых факториалов\n");
//		printf("22 - вывести первые N чисел Фибоначчи\n");
//		printf("23 - вывести разложение числа N на простые множители\n");
//		printf("\n0 - Выход из программы\n");
//		printf("\n");
//		scanf_s("%d", &n);
//		int i;
//		int a;
//		int S;
//		switch (n)
//		{
//
//		case(1):
//		{
//			printf("\nВывод программы 1: ");
//			i = 0;
//			do {
//				i++;
//				printf("%d ", i);
//			} while (i < 10);
//			break;
//		}
//		case(2):
//		{
//			printf("\nВывод программы 2: ");
//			i = 10;
//			do {
//				printf("%d ", i);
//				i--;
//			} while (i > 0);
//			break;
//		}
//		case(3): {
//			printf("\nВывод программы 3: ");
//			i = 0;
//			a = 0;
//			do {
//				i++;
//				if (i % 2 != 0) {
//					printf("%d ", i);
//					a++;
//				}
//			} while (a < 5);
//			break;
//		}
//		case(11):
//		{
//			printf("\nВывод программы 11: ");
//			i = 100;
//		loop:
//			if (i < 10) goto end;
//			printf("%d ", i);
//			i -= 10;
//			goto loop;
//		end:
//			break;
//		}
//		//case(11):
//		//{
//		//	printf("\nВывод программы 11: ");
//		//	i = 100;
//		//	while (i >= 10) {
//		//		printf("%d ", i);
//		//		i -= 10;
//		//	}
//		//	break;
//		//}
//		//case(12):
//		//{
//		//	printf("\nВывод программы 12: ");
//		//	i = 1000;
//		//	while (i >= 100) {
//		//		printf("%d ", i);
//		//		i -= 100;
//		//	}
//		//	break;
//		//}
//		case(12):
//		{
//			printf("\nВывод программы 12: ");
//			i = 1000;
//		start:
//			if (i < 100) goto end;
//			printf("%d ", i);
//			i -= 100;
//			goto start;
//		end:
//			break;
//		}
//		//case(13):
//		//{
//		//	printf("\nВывод программы 13: \n");
//		//	double S;
//		//	int m;
//		//	i = 1;
//		//	printf("Введите начальную сумму: ");
//		//	scanf_s("%lf", &S);
//		//	printf("Введите процентную ставку: ");
//		//	scanf_s("%d", &m);
//
//		//	printf("\nИзменение счета за 10 лет:\n");
//		//	printf("0 лет: %.2f\n", S);
//		//	while (i <= 10) {
//		//		S = S + (S * m) / 100.0;
//		//		printf("%d лет: %.2f\n", i, S);
//		//		i++;
//		//	}
//		//	break;
//		//}
//		case(13):
//		{
//			printf("\nВывод программы 13: \n");
//			double S;
//			int m;
//			i = 1;
//			printf("Введите начальную сумму: ");
//			scanf_s("%lf", &S);
//			printf("Введите процентную ставку: ");
//			scanf_s("%d", &m);
//			printf("\nИзменение счета за 10 лет:\n");
//			printf("0 лет: %.2f\n", S);
//		start:
//			if (i > 10) goto end;
//			S = S + (S * m) / 100.0;
//			printf("%d лет: %.2f\n", i, S);
//			i++;
//			goto start;
//		end:
//			break;
//		}
//		case(20):
//		{
//			printf("\nВывод программы 20: \n");
//			int N;
//			int p = 10000;
//			printf("N = ");
//			scanf_s("%d", &N);
//			if (N <= 0) {
//				printf("Ошибка: N должно быть больше 0\n");
//				break;
//			}
//			while (1) {
//				printf("%d\n", p);
//				if (p == 0) break;
//				p -= N;
//				if (p < 0) {
//					p = 0;
//				}
//			}
//			break;
//		}
//		case(21):
//		{
//			printf("\nВывод программы 21: \n");
//			int n, i, f;
//			printf("N = ");
//			scanf_s("%d", &n);
//			i = 1;
//			f = 1;
//			while (i <= n) {
//				f *= i;
//				printf("%d ", f);
//				i++;
//			}
//			printf("\n");
//			break;
//		}
//		case(22):
//		{
//			printf("\nВывод программы 22: \n");
//			int n, i, a, b, c;
//			printf("N = ");
//			scanf_s("%d", &n);
//			a = 1;
//			b = 1;
//			i = 0;
//			while (i < n) {
//				printf("%d ", a);
//				c = a + b;
//				a = b;
//				b = c;
//				i++;
//			}
//			printf("\n");
//			break;
//		}
//		case(23):
//		{
//			printf("\nВывод программы 23: \n");
//			int n, d;
//			printf("N = ");
//			scanf_s("%d", &n);
//			d = 2;
//			while (d <= n) {
//				while (n % d == 0) {
//					printf("%d ", d);
//					n /= d;
//				}
//				d++;
//			}
//			printf("\n");
//			break;
//		}
//
//		}
//	} while (n != 0);
//}

void main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	printf("Введите опцию\n");
	int n;
	do {
		printf("\n\n1 - 3.2.1\n");
		printf("2 - 3.2.2\n");
		printf("3 - 3.2.3\n");
		printf("2 - 3.2.4*\n");
		printf("\n0 - Выход из программы\n");
		printf("\n");
		scanf_s("%d", &n);
		int i;
		int a;
		int S;
		switch (n)
		{
		case(1):
		{
			printf("\nВывод программы 1: \n");
			int n, m, i, j;
			printf("N = ");
			scanf_s("%d", &n);
			printf("M = ");
			scanf_s("%d", &m);
			i = 1;
			while (i <= n) {
				j = 1;
				while (j <= m) {
					printf("%d ", i * 10 + j);
					j++;
				}
				printf("\n");
				i++;
			}
			break;
		}
		case(2):
		{
			printf("\nВывод программы 2: \n");
			int i, j;
			i = 1;
			do {
				j = 1;
				do {
					if (i == 10 && j == 10) {
						printf("%4d", 10);
						printf("%d", 0);
					}
					else {
						printf("%4d", i * j);
					}
					j++;
				} while (j <= 10);
				printf("\n");
				i++;
			} while (i <= 10);
			break;
		}

		case(3):
		{
			printf("\nВывод программы 3: \n");
			int n, i, j;
			printf("N = ");
			scanf_s("%d", &n);
			i = 1;
			do {
				j = n;
				do {
					printf("%d ", j);
					j--;
				} while (j >= i);
				printf("\n");
				i++;
			} while (i <= n);
			break;
		}
		case(4):
		{
			printf("\nВывод программы 4: \n");
			int n, i, j, k;
			printf("N = ");
			scanf_s("%d", &n);
			i = 1;
			do {
				k = 1;
				while (k < i) {
					printf("  ");
					k++;
				} 

				j = n;
				do {
					if (j == i)
						printf("%d", j);
					else
						printf("%d ", j);
					j--;
				} while (j >= i);

				printf("\n");
				i++;
			} while (i <= n);

			i = n - 1;
			do {
				k = 1;
				while (k < i) {
					printf("  ");
					k++;
				} 

				j = n;
				do {
					if (j == i)
						printf("%d", j);
					else
						printf("%d ", j);
					j--;
				} while (j >= i);

				printf("\n");
				i--;
			} while (i >= 1);

			break;

		}

		
		}
	} while (n != 0);

}