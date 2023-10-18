#include <stdio.h>

void swap(float* a, float* b){
    float t; 
    t=*a;
    *a=*b;
    *b=t;
    return;
}

int main(){
    float a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Input 1st number: ");
    scanf("%f", &a);
    printf("Input 2nd number: ");
    scanf("%f", &b);
    swap(p, q);
    printf("swapped 1st: %f, 2nd: %f\n", a, b);
    return 0;
}