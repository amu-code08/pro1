#include <stdio.h>
struct mydate {
    int year;
    int month;
    int day;
};

int main(){
    char a = "a";
    short int si=1;
    int i = 10;
    long int longi = 12451885;
    float f = 1.32;
    double d = 3.141592;
    struct mydate date = {2002, 8, 27};

    printf("char %d(byte)\nshort int %d(byte)\nint %d(byte)\nlong int %d(byte)\nfloat %d(byte)\ndouble %d(byte)\nstruct point %d(byte)\n", sizeof(a), sizeof(si), sizeof(i), sizeof(longi), sizeof(f), sizeof(d), sizeof(date));

    return 0;

}