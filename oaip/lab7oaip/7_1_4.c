#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    printf("Введите строку: ");
    fgets(s, sizeof(s), stdin);
    printf("Строка до обработки: %s \n", s);
    for (int i = 0; i<strlen(s); i++){
        if (s[i]==' '){
            s[i]='#';
        }
    }
    printf("Строка после обработки: %s", s);
    return 0;
}