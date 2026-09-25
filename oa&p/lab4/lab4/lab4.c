#include <stdio.h> 
#include <windows.h>
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	//task4_1_1();
	//task4_1_2();
	//task4_1_3();
	//task4_1_4();
	//task4_1_5();
	//task4_1_6();
	//task4_2_1();
	//task4_2_2();
	//task4_2_3();
}

int isLeapYear(int n) {
	if (n % 400 == 0) return 1;
	if (n % 100 == 0) return 0;
	if (n % 4 == 0) return 1;
	return 0;
}
int task4_1_1() {
	printf("Введите 2 целых года через пробел: \n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	do {
		if (isLeapYear(a)) printf("%d ", a);
		a++;
	} while (a < b);

	return 0;
}


int isPrime(int n) {
	if (n < 2) return 0;
	int i = 2;
	while (i * i <= n) {
		if (n % i == 0) return 0;
		i++;
	}
	return 1;
}
int task4_1_2() {
	printf("Введите 2 целых числа:\n");
	printf("1. Начало анализируемого интервала\n");
	printf("2. Конец анализируемого интервала\n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	do {
		if (isPrime(a)) printf("%d ", a);
		a++;
	} while (a <= b);
	printf("\n");
	return 0;
}



int sumDigits(int n) {
	int sum = 0;
	if (n < 0) n = -n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int task4_1_3() {
	printf("Введите 2 целых числа:\n");
	printf("1. Начало анализируемого интервала\n");
	printf("2. Конец анализируемого интервала\n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	do {
		printf("Сумма цифр(%d) = %d\n", a, sumDigits(a));
		a++;
	} while (a <= b);
	return 0;
}


int bilValueEu(int n) {
	if (n < 10) return(0);
	if (n >= 10 && n <= 20) return(87);
	if (n >= 21 && n <= 30) return(145);
	if (n >= 31 && n <= 40) return(232);
	if (n >= 41 && n <= 50) return(580);
	if (n >= 51) return(660);
	return 0;
}
int bilValueRu(int n) {
	if (n < 10) return(0);
	if (n >= 10 && n <= 20) return(8800);
	if (n >= 21 && n <= 30) return(14700);
	if (n >= 31 && n <= 40) return(23500);
	if (n >= 41 && n <= 50) return(58800);
	if (n >= 51) return(67000);
	return 0;
}
int task4_1_4() {
	printf("Ввдеите величину превышения: ");
	int a;
	scanf_s("%d", &a);
	int i = bilValueEu(a);
	int j = bilValueRu(a);
	if (a < 70) {
		printf("это штраф в размере %d€ или же %d₽", i, j);
	} else printf("Лишение, срок зависит от тяжести нарушения");
}

cenaPoezdki(int n, int a, int b) {
	int sum = a + (n * b);
	return sum;
}

int task4_1_5(){
	printf("Расценки: %d - активация самоката, %d - цена за каждую минуту поездки\n");
	int a = 60;
	int b = 10;
	printf("Введите сколько минут вы катались ");
	int n;
	scanf_s("%d", &n);
	int g = cenaPoezdki(n, a, b);
	printf("%d", g);
}

int ndfl(int n) {
	int sum = 0;
	if (n > 1817000) {
		sum += (n - 1817000) * 45 / 100;
		n = 1817000;
	}
	if (n > 857900) {
		sum += (n - 857900) * 41 / 100;
		n = 857900;
	}
	if (n > 673000) {
		sum += (n - 673000) * 39 / 100;
		n = 673000;
	}
	if (n > 512800) {
		sum += (n - 512800) * 36 / 100;
		n = 512800;
	}
	if (n > 370500) {
		sum += (n - 370500) * 31 / 100;
		n = 370500;
	}
	if (n > 237100) {
		sum += (n - 237100) * 26 / 100;
		n = 237100;
	}
	if (n > 0) {
		sum += n * 18 / 100;
	}
	return sum;
}

int task4_1_6() {
	printf("Расчет НДФЛ в ЮАР\n");
	printf("Введите годовой доход: ");
	int i;
	scanf_s("%d", &i);
	printf("НДФЛ: %d\n", ndfl(i));
	return 0;
}

#define prmtr(a, b) (2 * ((a) + (b)))
int task4_2_1() {
	printf("Введите две стороны прямоугольника через пробел: \n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("Периметр прямоугольника: %d\n", prmtr(a, b));
	return 0;
}
#define ltgl(l) ((l) / 3.78541f)
int task4_2_2() {
	printf("Введите объем в литрах: \n");
	float l;
	scanf_s("%f", &l);
	printf("Объем в галлонах: %.2f\n", ltgl(l));
}
#define srdnarfmt3(a, b, c) (((a) + (b) + (c)) / 3.0)
int task4_2_3() {
	int n1, n2, n3, a;
	printf("Введите 3 числа через пробел: ");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	a = srdnarfmt3(n1, n2, n3);
	printf("%d", a);
}