#include <stdio.h>

int main(){
    int a, i, sum;
    printf("Please input number:");
    scanf("%d", &a);

    if(a>0 && a<=100){
        for (i=1; i<=a; i++){
        sum+=i;
        }
        printf("Sum 1 - %d is: %d\n", a, sum);
    } else {
        printf("Error: input range is 1 to 100\n");
    }

    return 0;
}
    