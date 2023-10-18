#include <stdio.h>
#include <stdlib.h>

struct score{
    int gb;
    int math;
    int eng;
    int sci;
};

void print_total_average(struct score* p){
    int total;
    float average;

    total = p->math+p->eng+p->sci;
    average = (float)total/3;

    printf("student[%d] total:%d, average:%f\n", p->gb, total, average);
};

int main()
{
int i;
struct score list[3] = {
{ 61500001, 90, 72, 55 },
{ 61500002, 82, 77, 85 },
{ 61500003, 65, 91, 73 },
};
for (i = 0;i < 3;i++) {
print_total_average(&(list[i]));
}
return 0;
}