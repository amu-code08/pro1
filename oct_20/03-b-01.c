#include <stdio.h>

int main(){
    int i;
    int j;

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if(i==j){
                printf("%d ", 1);
            } else {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }

    return 0;
}