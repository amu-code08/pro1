#include <stdio.h>

int main(){
    printf("input 5 numbers:");
    int a[5];

    scanf("%d\n%d\n%d\n%d\n%d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    int i;
    for (i=0; i<5; i++){
        printf("%d", a[4-i]);
    }
    return 0;
}