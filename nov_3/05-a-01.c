#include <stdio.h>

struct point {
    float x;
    float y;
};


int main(){
    struct point pa, pb;

    printf("input first point (x1 y1):");
    scanf("%f %f", &(pa.x), &(pa.y));
    printf("input second point (x1 y1):");
    scanf("%f %f", &(pb.x), &(pb.y));

    float slope =  (pa.y-pb.y) / (pa.x-pb.x);

    float intercept = pb.y - slope*pb.x;

    printf("linear function : y=%fx+%f\n",slope, intercept);
    return 0; 
}
