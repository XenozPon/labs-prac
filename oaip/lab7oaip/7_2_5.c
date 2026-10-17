#include <stdio.h>
#include <string.h>

void myStrncat(char s1[], char s2[], int n) {
    int i = 0;
    while (s1[i] != '\0') i++;
    int j = 0;
    while (j < n && s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
}

void myStrncatP(char *s1, char *s2, int n) {
    while (*s1) s1++;
    while (n > 0 && *s2 != '\0') {
        *s1++ = *s2++;
        n--;
    }
}

int main() {
    char s1[200], s2[100];
    char s1_copy[200], s2_copy[100];
    int n;
    
    printf("Введите первую строку: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Введите вторую строку: ");
    fgets(s2, sizeof(s2), stdin);
    printf("Введите количество символов для добавления: ");
    scanf("%d", &n);
    strcpy(s1_copy, s1);
    strcpy(s2_copy, s2);
    myStrncat(s1, s2, n);
    printf("Вывод первым способом: %s\n", s1);
    myStrncatP(s1_copy, s2_copy, n);
    printf("Вывод вторым способом: %s\n", s1_copy);
    return 0;
}