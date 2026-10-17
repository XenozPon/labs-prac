#include <stdio.h>
#include <ctype.h>
#include <string.h>
int myIsDigit(char c){
    if(c>='0' && c<='9') return 1;
    return 0;
}
int main(){
    char s[100], s1[100];
    printf("Введите строку: ");
    fgets(s, sizeof(s), stdin);
    strcpy(s1,s);
    printf("Строка до обработки: %s \n", s);
    for (int i = 0; i<strlen(s); i++){
        if (isdigit(s[i])) s[i]='$';
    }
    for (int i = 0; i<strlen(s1); i++){
        if (myIsDigit(s1[i])) s1[i]='$';
    }
    printf("Строка после обработки встроенной функцией \"isdigit\": %s", s);
    printf("Строка после обработки моей функцией \"myIsDigit\": %s", s1);
    return 0;
}