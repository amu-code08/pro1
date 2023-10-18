#include <stdio.h>

int main(){
    int temp,i,j,k, counter[9], a[100];
    for (j=0; j<9; j++){
        counter[j]=0;
    }
   
    for(i=0;;i++){
        scanf("%d", &temp);
        if(temp >=1 && temp <= 9){
            a[i]=temp;
            counter[temp-1]++;
        } else if(temp==0){
          for (j=0; j<9; j++){
              printf("[%d]:%d\n", j+1, counter[j]);
          }
        break;
        } else {
            printf("Illegal input %d\n", temp);
            break;
        }
    }
 
 return 0;
}