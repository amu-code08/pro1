#include <stdio.h>
 
 int tousa(a, d, n){
    if(n==0){
        return 0;
    }
    tousa(a, d, n-1);
    printf("[%d] : %d\n",n,a+d*(n-1));
 }

int main(){
     int a, d, n;
     printf("Input a d n: ");
     scanf("%d %d %d", &a, &d, &n);
     tousa(a, d, n);
 }