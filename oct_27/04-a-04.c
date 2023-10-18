#include <stdio.h>

int main(){
    int a, *p;
    printf("input an integer: ");
    scanf("%d", &a);
    p = &a;
    printf("address of a is %d\n", p);
    printf("value of a is %d\n", *p);
}