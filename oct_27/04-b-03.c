#include <stdio.h>

void mytoupper(char* cp){
    *cp=*cp-'a'+'A';
    return;
}

int main(){
    char c, *cp;
    printf("Input character: ");
    scanf("%c", &c);
    cp=&c;
    mytoupper(cp);
    printf("Output character:%c\n", *cp);
    return 0;
}