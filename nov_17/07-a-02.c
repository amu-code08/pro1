#include <stdio.h>

int greatest_common_divisor(int a, int b){
    int r = a%b;
    if (b%r==0){
        return r;
    }
    greatest_common_divisor(b,r);
}

int main(){
    int a, b;
    printf("Input two integers: ");
    scanf("%d %d", &a, &b);
    printf("greatest common divisor is %d\n", greatest_common_divisor(a,b));
}