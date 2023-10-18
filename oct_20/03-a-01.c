#include <stdio.h>

int main(){
    float a,b;
    printf("input two integer:");
    scanf("%f %f", &a, &b);

    printf(" %f \n %f \n %f \n %f", a+b, a-b, a*b, a/b);

    return 0;
}