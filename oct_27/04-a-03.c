#include <stdio.h>

float calc(float a, float b, char c){
    float ans;
    if(c=='+'){
        ans = a+b;
    } else if(c=='-'){
        ans = a-b;
    } else if(c=='*'){
        ans = a*b;
    } else{
        if(b==0){
            ans = 0;
        } else {
            ans = a/b;
        } 
    }

    return ans; 
}

int main(void){
float a = 1234, b = 5678;
printf("%f + %f = %f\n", a, b, calc(a, b, '+'));
printf("%f - %f = %f\n", a, b, calc(a, b, '-'));
printf("%f * %f = %f\n", a, b, calc(a, b, '*'));
printf("%f / %f = %f\n", a, b, calc(a, b, '/'));
return 0;
}

