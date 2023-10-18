#include <stdio.h>
void aster(int x){
    for (x; x>0; x--)
        printf("*");
    return; 
}

int main(){
    int a;
    printf("input a positive integer: ");
    scanf("%d", &a);
    aster(a);
    printf("\n");
    return 0;
}