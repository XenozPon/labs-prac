#include <stdio.h>
#include <string.h>

void myStrCat(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

void myStrCatP(char *s1, char *s2) {
    while (*s1) s1++;
    while ((*s1++ = *s2++) != '\0');
}

int main() {
    char s1[200], s2[100];
    char buf1[200], buf2[100];
    
    printf("Введите первую строку: ");
    fgets(s1, sizeof(s1), stdin);
    
    printf("Введите вторую строку: ");
    fgets(s2, sizeof(s2), stdin);
    
    strcpy(buf1, s1);
    strcpy(buf2, s2);
    myStrCat(buf1, buf2);
    printf("Вывод первым способом: %s\n", buf1);
    
    strcpy(buf1, s1);
    strcpy(buf2, s2);
    myStrCatP(buf1, buf2);
    printf("Вывод вторым способом: %s\n", buf1);
    
    return 0;
}