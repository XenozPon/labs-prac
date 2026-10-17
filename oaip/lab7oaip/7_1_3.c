#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int cnt = 0;
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i<strlen(s); i++){
        if (s[i]==' ') cnt++;
    }
    printf("В строке: *%s*, %d пробелов", s, cnt);
    return 0;
}