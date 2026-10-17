#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* CreateNewString(char* s1);
char* CreateNewStringP(char* s1);

int main() {
    char s1[100];

    printf("s1=");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    char* s2_1 = CreateNewString(s1);
    char* s2_2 = CreateNewStringP(s1);

    printf("Вывод первым способом: %s\n", s2_1);
    printf("Вывод вторым способом: %s\n", s2_2);

    free(s2_1);
    free(s2_2);
    
    return 0;
}

char* CreateNewString(char* s1) {
    int i = 0;
    int newLen = 0;
    
    while (s1[i] != '\0' && !isdigit(s1[i])) {
        i++;
    }
    newLen = i;
    
    char* s2 = (char*)malloc((newLen + 1) * sizeof(char));
    if (s2 == NULL) {
        return NULL;
    }
    
    int j = 0;
    while (j < newLen) {
        s2[j] = s1[j];
        j++;
    }
    s2[j] = '\0';
    
    return s2;
}

char* CreateNewStringP(char* s1) {
    char* p = s1;
    int len = 0;

    while (*p != '\0' && !isdigit(*p)) {
        len++;
        p++;
    }

    char* s2 = (char*)malloc((len + 1) * sizeof(char));
    if (s2 == NULL) {
        return NULL;
    }

    char* p2 = s2;
    p = s1;

    while (*p != '\0' && !isdigit(*p)) {
        *p2 = *p;
        p2++;
        p++;
    }

    *p2 = '\0';

    return s2;
}