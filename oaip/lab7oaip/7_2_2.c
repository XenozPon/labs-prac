#include <stdio.h>
char* myStrCpy(char s[], char sNew[]) {
    int i = 0;
    while (s[i] != '\0') {
        sNew[i] = s[i];
        i++;
    }
    sNew[i] = '\0'; 
    return sNew;
}
char* myStrCpyP(char *s, char *sNew) {
    char *p = sNew;
    while ((*p++ = *s++) != '\0');
    return sNew;
}
int main() {
    char s[100];
    char sNew[100];
    
    printf("Введите строку: ");
    fgets(s, sizeof(s), stdin);
    
    myStrCpy(s, sNew);
    printf("Копия (массив): %s\n", sNew);
    
    myStrCpyP(s, sNew);
    printf("Копия (указатель): %s\n", sNew);
    
    return 0;
}