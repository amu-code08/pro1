#include <stdio.h>
#include <stdlib.h>

struct student_data{
    int gb;
    int h;
    int w;
};

int main(){
    int i, tgb, th, tw, counter, tallest, shortest, heaviest, lightest, ti, si, hi, li;
    struct student_data list[10];
    for(i=0; i<10; i++){
    printf("Input student number, height, weight: ");
    scanf("%d %d %d", &tgb, &th, &tw);
    if (tgb<0){
        break;
    } else {
        list[i].gb = tgb;
        list[i].h = th;
        list[i].w = tw;
        counter++;
    }
    }
    tallest = list[0].h;
    shortest = list[0].h;
    heaviest = list[0].w;
    lightest = list[0].w;
    ti = 0; 
    si = 0;
    hi = 0;
    li = 0;

    for (i=1; i<counter; i++){
        if(list[i].h>tallest){
            tallest = list[i].h;
            ti =  i;
        }

        if(list[i].h<shortest){
            shortest = list[i].h;
            si = i;
        }

        if(list[i].h>heaviest){
            heaviest = list[i].w;
            hi = i;
        }

        if(list[i].h<lightest){
            lightest = list[i].w;
            li = i;
        }
    }
    printf("Tallest student number is %d (%dcm)\nShortest student number is %d (%dcm)\nHeaviest student number is %d (%dkg)\n Lightest student number is %d (%dkg)\n", list[ti].gb, list[ti].h, list[si].gb, list[si].h, list[hi].gb, list[hi].w, list[li].gb, list[li].w);
    return 0;
}