#include <stdio.h>

int main(){
    int size, i, a[100], test[100], max, min, sum;
    printf("input array size:");
    scanf("%d", &size);
    printf("input array elements:");

    for (i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    //create array copy
    for (i=0; i<size; i++){
        test[i]=a[i];
    }

    //calculate sum
    for (i=0; i<size; i++){
        sum+=a[i];
    }

    //calculate max
    for (i=0; i<size-1; i++){
        if(a[i]>a[i+1]){
            a[i+1]=a[i];
        } 
    }
    max = a[size-1];

    //calculate min
    for (i=0; i<size-1; i++){
        if(test[i]<test[i+1]){
            test[i+1]=test[i];
        } 
    }
    min = test[size-1];
    

    printf("max:%d,", max);
    printf("min:%d,", min);
    printf("average:%f", (float)sum/size);
    return 0;
}