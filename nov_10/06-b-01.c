#include <stdio.h>
#include <stdlib.h>

struct data_t{
    struct data_t *prev, *next;
    int data, freq; 
};

void push(struct data_t *head, struct data_t *prev, struct data_t *w){
    w->next=head;
    w->prev=prev;
    prev->next=w;
    head->prev=w;
};

printfreq(struct data_t *head){
    struct data_t *p;
    for (p=head->next; p!=head; p=p->next){
        printf("[%d] : %d\n", p->data, p->freq);
    }
};

int main(){
    int d=0;
    struct data_t *w, *p, *prev, head;
    int existed = 0;
    head.prev = &head;
    head.next = &head;
    prev = &head;

    for(;scanf("%d", &d) != EOF ;){
        existed = 0;
        for (p=head.next; p!=&head; p=p->next){
            if(d==p->data){
                p->freq+=1;
                existed = 1;
            } 
        }
        if(existed==0){
            w=(struct data_t*)malloc(sizeof(struct data_t));
            w->data=d;
            w->freq=1;
            push(&head, prev, w);
            prev = w;
        } 
    }    
    printfreq(&head);
    return 0;
}