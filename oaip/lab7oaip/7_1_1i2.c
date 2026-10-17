#include <stdio.h>
int main(){
    printf("Введите символ = ");
    int ch = getchar();

    //7.1.1
    // for (int c = ch; c<=ch+19;c++)

    //7.1.2
    for (int c=ch;c>=ch-29; c--){
        printf("%c  (%d)\n",c,c);
    }

    return 0;
}