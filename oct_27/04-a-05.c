#include <stdio.h>

void hundred(int a){
    a=100;
    return;
}

void hundred2(int* a){
    *a=100;
    return;
}

int main(){
    int a, b, *p;
    a=500; b=500; p=&b;
    printf("a=%d, b=%d\n", a, b);
    hundred(a); 
    hundred2(p);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}