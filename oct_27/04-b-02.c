#include <stdio.h>

int main(){
    int i, *ip;
    char c, *cp;
    i=5; c='5';
    ip=&i; cp=&c;
    printf("ip: %p\n", ip);
    ip++;
    printf("++ip: %p\n", ip);
    printf("cp: %p\n", cp);
    cp++;
    printf("++cp: %p\n", cp);
    return 0;
}