#include <stdio.h>

int main(){
    int a;
    printf("input an integer:");
    scanf("%d", &a);
    int i;
    for (i=0; i<a; i++){
        printf("*");
    }
    return 0;
}