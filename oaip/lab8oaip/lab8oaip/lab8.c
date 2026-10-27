#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define filePath8_1_1 "C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_1_1.txt"
#define filePath8_1_1_star "C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_1_1star.c"
#define filePath8_1_2_input "C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_1_2_input.txt"
#define filePath8_1_2_output "C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_1_2_output.txt"
#define filePath8_1_3 "C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_1_3.txt"
#define filePathInput8_1_4 "C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_1_4input.txt"
#define filePathOutput8_1_4 "C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8.1.4output.txt"

void printArrayInFile8_1_3(int arr[], int size);
void printArrayInFile8_1_4(int* arr, int count);
int* scanArrayFromFile8_1_4(int count);
void changeMass8_1_4(int* arr, int count);
void printWord8_3_2(FILE* f, const char* w);

void printWord8_3_2(FILE* f, const char* w) {
    int len = (int)strlen(w);
    int alt = (len >= 2);
    int lower = 0;

    for (int k = 1; k < len; k++) {
        if (isupper((unsigned char)w[k]) == isupper((unsigned char)w[k - 1])) {
            alt = 0;
            break;
        }
    }
    for (int k = 0; k < len; k++) {
        if (islower((unsigned char)w[k])) {
            lower = 1;
            break;
        }
    }

    if (alt && lower) fprintf(f, "<b><i>%s</i></b>", w);
    else if (alt)     fprintf(f, "<b>%s</b>", w);
    else if (lower)   fprintf(f, "<i>%s</i>", w);
    else              fprintf(f, "%s", w);
}

int main(void) {
    FILE* f = fopen(filePath8_1_1, "wt");
    if (!f) {
        printf("File is not created");
        return 1;
    }

    fprintf(f, "ФИО студента: Парушев Илья Владимирович\nВозраст студента: 18 лет\nГруппа студента: ПИбд-11");
    fclose(f);

    FILE* fstar = fopen(filePath8_1_1_star, "w");
    if (!fstar) {
        printf("File is not created");
        return 1;
    }
    fprintf(fstar, "#include <stdio.h>\nint main(){\nprintf(\"Autor: Parushev Ilia\");\nreturn 0;}");
    fclose(fstar);
    printf("\n8.1.1 успешно\n");

    FILE* f8_1_2input = fopen(filePath8_1_2_input, "rt");
    if (!f8_1_2input) {
        printf("File is not created");
        return 1;
    }
    FILE* f8_1_2output = fopen(filePath8_1_2_output, "wt");
    if (!f8_1_2output) {
        printf("File is not created");
        return 1;
    }
    int a, b, c;
    if ((fscanf_s(f8_1_2input, "%d%d%d", &a, &b, &c)) != 3) {
        printf("Осечка");
        return 1;
    }
    if (a < b) a = b;
    if (a < c) a = c;
    fprintf(f8_1_2output, "%d", a);
    fclose(f8_1_2input);
    fclose(f8_1_2output);
    printf("\n8.1.2 успешн\n");

    int arrayqwe[5] = { 1123, 23, 2, 3, 4 };
    printArrayInFile8_1_3(arrayqwe, 5);

    int count = 0;
    printf("Введите сколько чисел из тескового файла засунем в массив? n = ");
    if (scanf_s("%d", &count) != 1 || count < 1 || count > 100) {
        printf("неверный ввод\n");
        return 1;
    }
    int* arr = scanArrayFromFile8_1_4(count);
    if (!arr) return 1;
    printf("Элементы массива изначально: < ");
    for (int j = 0; j < count; j++) {
        printf("%d ", arr[j]);
    }
    printf(">\n");
    changeMass8_1_4(arr, count);
    printf("Элементы массива после: < ");
    for (int j = 0; j < count; j++) {
        printf("%d ", arr[j]);
    }
    printf(">\n");
    printArrayInFile8_1_4(arr, count);

    FILE* task8_2_1in = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_1in.txt", "rt");
    if (!task8_2_1in) {
        printf("Файл 8_2_1in.txt не найден\n");
        return 1;
    }
    FILE* task8_2_1out = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_1out.txt", "wt");
    if (!task8_2_1out) {
        printf("Файл 8_2_1out.txt не создался\n");
        fclose(task8_2_1in);
        return 1;
    }

    char s1[256];
    while (fgets(s1, 256, task8_2_1in) != NULL) {
        for (int i = 0; s1[i] != '\0'; i++) {
            if (s1[i] == '\t') s1[i] = '%';
        }
        fprintf(task8_2_1out, "%s", s1);
    }

    fclose(task8_2_1in);
    fclose(task8_2_1out);
    printf("\nЗадание 8.2.1 выполнено\n");

    FILE* task8_2_2in = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_2in.txt", "rt");
    if (!task8_2_2in) {
        printf("Файл 8_2_2in.txt не найден\n");
        return 1;
    }
    FILE* task8_2_2out = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_2out.txt", "wt");
    if (!task8_2_2out) {
        printf("Файл 8_2_2out.txt не создался\n");
        fclose(task8_2_2in);
        return 1;
    }

    char s2[256];
    while (fgets(s2, 256, task8_2_2in) != NULL) {
        for (int i = 0; s2[i] != '\0'; i++) {
            if (s2[i] >= 'a' && s2[i] <= 'z') s2[i] = toupper(s2[i]);
        }
        fprintf(task8_2_2out, "%s", s2);
    }

    fclose(task8_2_2in);
    fclose(task8_2_2out);
    printf("\nЗадание 8.2.2 выполнено\n");

    FILE* task8_2_3in = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_3in.txt", "rt");
    if (!task8_2_3in) {
        printf("Файл 8_2_3in.txt не найден\n");
        return 1;
    }
    FILE* task8_2_3out = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_3out.txt", "wt");
    if (!task8_2_3out) {
        printf("Файл 8_2_3out.txt не создался\n");
        fclose(task8_2_3in);
        return 1;
    }

    char s3[256];
    while (fgets(s3, 256, task8_2_3in) != NULL) {
        int hasLatin = 0;
        for (int i = 0; s3[i] != '\0'; i++) {
            if ((s3[i] >= 'a' && s3[i] <= 'z') || (s3[i] >= 'A' && s3[i] <= 'Z')) {
                hasLatin = 1;
                break;
            }
        }
        if (hasLatin) fprintf(task8_2_3out, "#");
        fprintf(task8_2_3out, "%s", s3);
    }

    fclose(task8_2_3in);
    fclose(task8_2_3out);
    printf("\nЗадание 8.2.3 выполнено\n");

    FILE* task8_2_4in = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_4in.txt", "rt");
    if (!task8_2_4in) {
        printf("Файл 8_2_4in.txt не найден\n");
        return 1;
    }
    FILE* task8_2_4out = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_4out.txt", "wt");
    if (!task8_2_4out) {
        printf("Файл 8_2_4out.txt не создался\n");
        fclose(task8_2_4in);
        return 1;
    }
    char s4[256];
    while (fgets(s4, 256, task8_2_4in) != NULL) {
        for (int i = 0; s4[i] != '\0'; i++) {
            if ('A' <= s4[i] && s4[i] <= 'Z') s4[i] = '$';
        }
        fprintf(task8_2_4out, "%s", s4);
    }
    fclose(task8_2_4in);
    fclose(task8_2_4out);
    printf("\nЗадание 8.2.4 выполнено\n");

    FILE* task8_2_5in = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_5in.txt", "rt");
    if (!task8_2_5in) {
        printf("Файл 8_2_5in.txt не найден\n");
        return 1;
    }
    FILE* task8_2_5out = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_2_5out.txt", "wt");
    if (!task8_2_5out) {
        printf("Файл 8_2_5out.txt не создался\n");
        fclose(task8_2_5in);
        return 1;
    }
    char s5[256];
    while (fgets(s5, 256, task8_2_5in) != NULL) {
        int cnt = 0;
        for (int i = 0; i < (int)strlen(s5); i++) {
            if (s5[i] == ';') cnt += 1;
        }
        fprintf(task8_2_5out, "K:%d, %s", cnt, s5);
    }
    fclose(task8_2_5in);
    fclose(task8_2_5out);
    printf("\nЗадание 8.2.5 выполнено\n");

    FILE* task8_3_1in = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_3_1in.txt", "rt");
    if (!task8_3_1in) {
        printf("Файл 8_3_1in.txt не найден\n");
        return 1;
    }
    FILE* task8_3_1out = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_3_1out.html", "wt");
    if (!task8_3_1out) {
        printf("Файл 8_3_1out.html не создался\n");
        fclose(task8_3_1in);
        return 1;
    }

    fprintf(task8_3_1out, "<!DOCTYPE html>");
    fprintf(task8_3_1out, "<html><head>");
    fprintf(task8_3_1out, "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />");
    fprintf(task8_3_1out, "<title>HTML Document</title>");
    fprintf(task8_3_1out, "</head><body>");

    int ch;
    while ((ch = getc(task8_3_1in)) != EOF) {
        fprintf(task8_3_1out, "%c", ch);
        if (ch == '\n') {
            fprintf(task8_3_1out, "<br>");
        }
    }

    fprintf(task8_3_1out, "</body></html>");
    fclose(task8_3_1in);
    fclose(task8_3_1out);
    printf("\nЗадание 8.3.1 выполнено\n");

    FILE* task8_3_2in = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_3_2in.txt", "rt");
    if (!task8_3_2in) {
        printf("Файл 8_3_2in.txt не найден\n");
        return 1;
    }
    FILE* task8_3_2out = fopen("C:\\Users\\ilapa\\OneDrive\\Desktop\\labs-prac\\oaip\\lab8oaip\\lab8oaip\\files\\8_3_2out.html", "wt");
    if (!task8_3_2out) {
        printf("Файл 8_3_2out.html не создался\n");
        fclose(task8_3_2in);
        return 1;
    }

    fprintf(task8_3_2out, "<!DOCTYPE html>");
    fprintf(task8_3_2out, "<html><head>");
    fprintf(task8_3_2out, "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />");
    fprintf(task8_3_2out, "<title>HTML Document</title>");
    fprintf(task8_3_2out, "</head><body>");

    char w[80];
    int i = 0;
    int ch2;
    while ((ch2 = getc(task8_3_2in)) != EOF) {
        if (isalpha((unsigned char)ch2)) {
            if (i < 79) w[i++] = (char)ch2;
            continue;
        }

        if (i > 0) {
            w[i] = '\0';
            printWord8_3_2(task8_3_2out, w);
            i = 0;
        }

        if (ch2 == '\n')      fprintf(task8_3_2out, "<br>");
        else if (ch2 == '<')  fprintf(task8_3_2out, "&lt;");
        else if (ch2 == '>')  fprintf(task8_3_2out, "&gt;");
        else if (ch2 == '&')  fprintf(task8_3_2out, "&amp;");
        else                  fprintf(task8_3_2out, "%c", ch2);
    }

    if (i > 0) {
        w[i] = '\0';
        printWord8_3_2(task8_3_2out, w);
    }

    fprintf(task8_3_2out, "</body></html>");
    fclose(task8_3_2in);
    fclose(task8_3_2out);
    printf("\nЗадание 8.3.2 выполнено\n");
    return 0;
}

void printArrayInFile8_1_3(int arr[], int size) {
    FILE* farr = fopen(filePath8_1_3, "wt");
    if (!farr) {
        printf("ошибка");
        return;
    }
    else {
        fprintf(farr, "Содержимое массива: <");
        for (int d = 0; d < size; d++) {
            fprintf(farr, "%d, ", arr[d]);
        }
        fprintf(farr, "...>\n");
        fclose(farr);
        printf("\n8.1.3 успешно\n");
    }
}

int* scanArrayFromFile8_1_4(int count) {
    static int arr[100];
    FILE* fopenscan = fopen(filePathInput8_1_4, "rt");
    if (!fopenscan) {
        printf("ошибка");
        return NULL;
    }
    int n;
    int i = 0;
    while (i < 100 && i < count && fscanf(fopenscan, "%d", &n) == 1) {
        arr[i] = n;
        i++;
    }
    fclose(fopenscan);
    if (i < count) {
        printf("в файле только %d чисел, а запрошено %d\n", i, count);
        return NULL;
    }
    return arr;
}

void changeMass8_1_4(int* arr, int count) {
    int firstIndex = -1;
    int secondIndex = -1;

    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 == 0) {
            firstIndex = i;
            break;
        }
    }
    for (int i = count - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            secondIndex = i;
            break;
        }
    }

    if (firstIndex == -1 || firstIndex == secondIndex) return;

    for (int i = firstIndex + 1; i < secondIndex; i++) {
        if (arr[i] % 2 != 0) arr[i] *= 10;
    }
}

void printArrayInFile8_1_4(int* arr, int count) {
    FILE* inpt = fopen(filePathOutput8_1_4, "wt");
    if (!inpt) {
        printf("ошибка");
        return;
    }
    fprintf(inpt, "Итог: < ");
    for (int j = 0; j < count; j++) {
        fprintf(inpt, "%d ", arr[j]);
    }
    fprintf(inpt, ">\n");
    fclose(inpt);
} 