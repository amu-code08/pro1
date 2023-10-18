#include <stdio.h>
#include <stdlib.h>

struct calc_result{
    float sum;
    float diff;
    float prod;
    float div;
};

struct calc_result* get_calc_result(float a, float b){
    struct calc_result* p;
    p=(struct calc_result*)malloc(sizeof(struct calc_result));
    p->sum = a+b;
    p->diff = a-b;
    p->prod = a*b;
    if(b==0){
        p->div = 0;
    } else {
    p->div = a/b;
    }
    return p;
}

int main(){
    float a,b;
    printf("input two integers: ");
    scanf("%f %f", &a, &b);
    struct calc_result* p = get_calc_result(a, b);
    printf("%f + %f = %f\n%f - %f = %f\n%f x %f = %f\n%f ÷ %f = %f\n", a, b, p->sum, a, b, p-> diff, a, b, p-> prod, a, b, p-> div);
}
