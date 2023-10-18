#include <stdio.h>
#include <stdlib.h>

struct data_t{
    struct data_t *prev, *next;
    int data; 
};

void insert(struct data_t *p, struct data_t *w){
    p->prev->next = w;
    w->prev = p->prev;;
    w->next = p;
    p->prev = w;  
};

void printall(struct data_t *head){
    struct data_t *p;
    for (p = head->next; p != head; p= p->next){
    printf("[p: %p, bp: %p, fp: %p, data: %d\n", p, p->prev, p->next, p->data);
    } 
};

int main(){
    int d=0;
    struct data_t head;
    head.prev = &head;
    head.next = &head; 
    struct data_t *w;
    for(;scanf("%d", &d) != EOF ;){
        w=(struct data_t*)malloc(sizeof(struct data_t));
        w->data=d;
        insert(&head, w);
    }
    printall(&head);
    return 0;
}