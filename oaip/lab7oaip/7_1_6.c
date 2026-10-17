#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[100];
    printf("Введите строку: ");
    fgets(s, sizeof(s), stdin);
    printf("Строка до обработки: %s \n", s);
    for (int i = 0; s[i]!= '\0'; i++){
        s[i]=toupper(s[i]);
    }
    printf("Строка после обработки: %s", s);
    return 0;
}