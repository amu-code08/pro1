#include <stdio.h>
int counter;

float average(int a[], int counter){
    int index, sum, size;
    sum=0;
    size=counter;
    for (index=0; index<size; index++){
        sum+=a[index];
    }
    printf("Sum is: %d\nAverage is: %f\n", sum, (float)sum/counter);
}


int main(){
    int i, a[100];
    char temp;
    for(i=0;; i++){
        scanf("%c", &temp);
        if(temp=='\n'){
            continue;
        } else if(temp >= '0' && temp <= '9') {
            a[counter]=(int)(temp-'0');
            counter++;
        } else if (temp=='E'){
            average(a, counter);
            break;
        } else {
            printf("Illegal input: %c\n", temp);
        }     
    }
    return 0;
}