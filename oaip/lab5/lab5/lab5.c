#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
extern int lab5_2_game();
extern int lab5_3_game();
#include <windows.h>

int test_sizes() {
    char i1;
    short i2;
    long i3;
    long long i4;
    int i5;
    printf("%d\n%d\n%d\n%d\n%d\n", sizeof(i1), sizeof(i2), sizeof(i3), sizeof(i4), sizeof(i5));
    return 0;
}

int test_char_signed() {
    char c = 0;
    char next_c = c + 1;
    while (next_c > c) {
        printf("%d ", c);
        c = next_c;
        next_c = c + 1;
    }
    char max_val = c;
    char min_val = next_c;
    if (min_val < 0) {
        printf("\nchar = signed (знаковый)\n");
    }
    else {
        printf("\nchar = unsigned (беззнаковый)\n");
    }
    return 0;
}

int test_fact_char() {
    int n = 1;
    char fact = 1, prevFact = 1;
    while (n < 100) {
        fact = 1;
        int i = 1;
        do {
            fact = fact * i;
            i = i + 1;
        } while (i <= n);
        printf("<%hhi (%d!) %d>\n", fact, n, (fact / prevFact));
        prevFact = fact;
        n += 1;
    }
    return 0;
}

int test_fact_short() {
    int n = 1;
    short fact = 1, prevFact = 1;
    while (n < 100) {
        fact = 1;
        int i = 1;
        do {
            fact = fact * i;
            i = i + 1;
        } while (i <= n);
        printf("<%hi (%d!) %d>\n", fact, n, (fact / prevFact));
        prevFact = fact;
        n += 1;
    }
    return 0;
}

int test_fact_int() {
    int n = 1;
    int fact = 1, prevFact = 1;
    while (n < 100) {
        fact = 1;
        int i = 1;
        do {
            fact = fact * i;
            i = i + 1;
        } while (i <= n);
        printf("<%i (%d!) %d>\n", fact, n, (fact / prevFact));
        prevFact = fact;
        n += 1;
    }
    return 0;
}

int test_fact_long() {
    int n = 1;
    long fact = 1, prevFact = 1;
    while (n < 100) {
        fact = 1;
        int i = 1;
        do {
            fact = fact * i;
            i = i + 1;
        } while (i <= n);
        printf("<%li (%d!) %d>\n", fact, n, (fact / prevFact));
        prevFact = fact;
        n += 1;
    }
    return 0;
}

int test_fact_longlong() {
    int n = 1;
    long long fact = 1, prevFact = 1;
    while (n < 100) {
        fact = 1;
        int i = 1;
        do {
            fact = fact * i;
            i = i + 1;
        } while (i <= n);
        printf("<%lli (%d!) %d>\n", fact, n, (fact / prevFact));
        prevFact = fact;
        n += 1;
    }
    return 0;
}

int test_float() {
    float f = 1.23456789012345678901234567890;
    int i = 0;
    while (i < 1000) {
        printf("<%60.30f (%d)>\n", f, i);
        f *= 10;
        i += 1;
    }
    printf("sizeof: f = %d,   i = %d\n", sizeof(f), sizeof(i));
    return 0;
}

int test_double() {
    double f = 1.23456789012345678901234567890;
    int i = 0;
    while (i < 1000) {
        printf("<%60.30f (%d)>\n", f, i);
        f *= 10;
        i += 1;
    }
    printf("sizeof: f = %d,   i = %d\n", sizeof(f), sizeof(i));
    return 0;
}

int test_implicit_cast() {
    int val;
    val = 1 + 2.1;
    printf("val = %d\n", val);
    return 0;
}

int test_explicit_cast() {
    int val;
    val = (int)(1 + 2.1);
    printf("val = %d\n", val);
    return 0;
}

int test_explicit_cast_2() {
    int sum = 0;
    float average;
    int grade;
    int counter = 0;
    printf("Vvedite otsenki (0 dlya zaversheniya):\n");
    do {
        scanf_s("%d", &grade);
        sum += grade;
        counter++;
    } while (grade != 0);
    average = (float)sum / (counter - 1);
    printf("average = %f\n", average);
    return 0;
}

int test_arrays_1() {
    int a[4];
    a[0] = 1;
    a[1] = 10;
    a[2] = 100;
    a[3] = 1000;
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    int b[5] = { 2, 20, 200, 2000, 20000 };
    printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
    return 0;
}

int test_arrays_2() {
    int a[4];
    a[0] = 1;
    a[1] = 10;
    a[2] = 100;
    a[3] = 1000;
    int i;
    i = 0;
    while (i < 4) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");
    int b[5] = { 2, 20, 200, 2000, 20000 };
    i = 0;
    while (i < 5) {
        printf("%d ", b[i]);
        i++;
    }
    printf("\n");
    return 0;
}

int lab5_1_1Select() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. sizeof types\n");
        printf("2. char signed check\n");
        printf("3. fact char\n");
        printf("4. fact short\n");
        printf("5. fact int\n");
        printf("6. fact long\n");
        printf("7. fact long long\n");
        printf("8. float precision\n");
        printf("9. double precision\n");
        printf("10. implicit cast\n");
        printf("11. explicit cast\n");
        printf("12. explicit cast 2 (average)\n");
        printf("13. arrays basic\n");
        printf("14. arrays while\n");
        printf("0. Exit\n");
        printf("Choose: ");
        scanf_s("%d", &choice);
        switch (choice) {
        case 1: test_sizes(); break;
        case 2: test_char_signed(); break;
        case 3: test_fact_char(); break;
        case 4: test_fact_short(); break;
        case 5: test_fact_int(); break;
        case 6: test_fact_long(); break;
        case 7: test_fact_longlong(); break;
        case 8: test_float(); break;
        case 9: test_double(); break;
        case 10: test_implicit_cast(); break;
        case 11: test_explicit_cast(); break;
        case 12: test_explicit_cast_2(); break;
        case 13: test_arrays_1(); break;
        case 14: test_arrays_2(); break;
        case 0: printf("Exit\n"); break;
        default: printf("\n\n\nInvalid choice\n"); break;
        }
    } while (choice != 0);
    return 0;
}

int task5_1_2_standard_types() {
    printf("char: %zu, short: %zu, int: %zu, long: %zu, long long: %zu\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    printf("float: %zu, double: %zu, long double: %zu\n", sizeof(float), sizeof(double), sizeof(long double));

    float f_val = 9.99f;
    int neyavnoe = f_val;
    int yavnoe = (int)f_val;
    printf("Float 9.99 = Implicit int: %d, Explicit int: %d\n", neyavnoe, yavnoe);
    long long scanfLongLong;
    printf("Enter a large number for long long: ");
    scanf_s("%lld", &scanfLongLong);
    printf("You entered: %lld, size in memory: %zu bytes\n", scanfLongLong, sizeof(scanfLongLong));
    return 0;
}

int task5_1_2_arrays_and_structs() {
    double elements[3] = { 150.5, 200.0, 99.9 };
    printf("Array 'elements' size: %zu bytes. Elements: %.1f, %.1f, %.1f\n", sizeof(elements), elements[0], elements[1], elements[2]);

    struct Eda {
        char name[15];
        int calories;
        float poleznost;
    };

    struct Eda pelmeni = { "Hero", 10, 100.0f };
    printf("Struct 'eda' размер: %zu байт (with padding).\n", sizeof(pelmeni));
    printf("pelmeni: %s, calories: %d, poleznost: %.1f\n", pelmeni.name, pelmeni.calories, pelmeni.poleznost);
    return 0;
}

int task5_1_2_advanced_types() {
    enum Statuses { OFFLINE, ONLINE, BUSY };
    enum Statuses my_status = ONLINE;
    printf("Enum Statuses: размер %zu байт, значение %d\n", sizeof(my_status), my_status);

    int score = 42;
    int* ptr_score = &score;
    printf("Указатель: размер %zu байт, адрес %p, значение %d\n", sizeof(ptr_score), (void*)ptr_score, *ptr_score);

    union DataUnion {
        int i;
        float f;
        char str[4];
    };
    union DataUnion u;
    u.i = 10;
    printf("Union: размер %zu байт, значение int %d\n", sizeof(u), u.i);

    struct DateBits {
        unsigned int day : 5;
        unsigned int month : 4;
        unsigned int year : 12;
    };
    printf("Битовая структура DateBits: %zu байт (21 бит, выровнено до 4)\n", sizeof(struct DateBits));
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}

int task5_1_2_func_pointer() {
    int (*func_ptr)(int, int) = &multiply;
    int result = func_ptr(6, 7);
    printf("Result: %d\n", result);
    return 0;
}

int lab5_1_2Select() {
    int choice;
    do {
        printf("\nMenu 5.1.2\n");
        printf("1. Standard types (sizeof, overflow, casting, scanf_s)\n");
        printf("2. Arrays and Structs\n");
        printf("3. Advanced (Enum, Pointers, Union, Bit fields)\n");
        printf("4. Function Pointer\n");
        printf("0. Back to Main Menu\n");
        printf("Choose: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1: task5_1_2_standard_types(); break;
        case 2: task5_1_2_arrays_and_structs(); break;
        case 3: task5_1_2_advanced_types(); break;
        case 4: task5_1_2_func_pointer(); break;
        case 0: printf("Returning to Main Menu...\n"); break;
        default: printf("\n\n\nInvalid choice\n"); break;
        }
    } while (choice != 0);
    return 0;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int n;
    do {
        printf("\nMenu:\n");
        printf("1. 5.1.1\n");
        printf("2. 5.1.2\n");
        printf("3. 5.2\n");
        printf("4. 5.3\n");
        printf("0. Exit\n");
        printf("Choose: ");
        scanf_s("%d", &n);
        switch (n) {
        case 1: lab5_1_1Select(); break;
        case 2: lab5_1_2Select(); break;
        case 3: lab5_2_game(); break;
        case 4: lab5_3_game(); break;
        case 0: printf("Exit\n"); break;
        default: printf("\n\n\nInvalid choice\n"); break;
        }
    } while (n != 0);
    return 0;
}