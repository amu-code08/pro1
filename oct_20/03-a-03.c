#include <stdio.h>

int main(){
    int a; 
    printf("input an integer:");
    scanf("%d", &a);
    int kaijo=1;

    int i;
    for (i=0; i<a; i++){
        kaijo*=i+1;
    }

    printf("%d \n", kaijo);

    return 0;
}
