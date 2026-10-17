#include <stdio.h>
int myStrLen(char s[]){
    int cnt = 0;
    for (int i = 0; s[i]!= '\0'; i++){
        cnt++;
    }
    return cnt-1;
}
int myStrLenP(char *s){
    char* p = s;
    while(*p) *p++;
    return p-s-1;
}
int main(){
    char s[100];
    printf("Введите строку: ");
    fgets(s, sizeof(s), stdin);
    int cnt = myStrLen(s);
    int cntP = myStrLenP(s);
    printf("длина строки при работе со строкой как с массивом: %d\n", cnt);
    printf("длина строки при работе со строкой при помощи указателя: %d\n", cntP);
    return 0;
}