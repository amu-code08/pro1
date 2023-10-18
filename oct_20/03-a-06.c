#include <stdio.h>

int main(){
    int i;
    int a=1;
    int b=1;
    int c=0;
    printf("fib[1]:1\n");
    printf("fib[2]:1\n");

    for (i=2; i<20; i++){
        c=a+b;
        a=b;
        b=c;
        printf("fib[%d]:%d\n", i+1, c);
    }

    

    return 0;
}