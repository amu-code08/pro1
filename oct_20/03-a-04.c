#include <stdio.h>

int main(){
    printf("input an integer:");
    int a;
    scanf("%d", &a);
    int i;
    int counter = 0;
    for (i=0; a>=1; i++){
        a/=10;
        counter=i+1;
    }
    printf("%d", counter);
    return 0;
}