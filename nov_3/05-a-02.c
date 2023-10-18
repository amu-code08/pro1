#include <stdio.h>

struct mydate {
    int year;
    int month;
    int day;
};

int main(){
    struct mydate date;

    scanf("%d %d %d", &(date.year), &(date.month), &(date.day));
    printf("%04d/%02d/%02d\n", date.year, date.month, date.day);

    return 0;
}
