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

struct data_t* insert_pos(struct data_t *head, struct data_t *w){
    int num = w->data;
    struct data_t *p;
    for(p=head->next; p != head; p=p->next){
        if (p->data>num){
            return p;
        }
    }
};

void printasc(struct data_t *head){
    struct data_t *p;
    for (p = head->next; p != head; p= p->next){
    printf("%d ",p->data);
    }
    printf("\n");
};

void printdsc(struct data_t *head){
    struct data_t *p;
    for (p = head->prev; p != head; p= p->prev){ 
        printf("%d",p->data);
    }
    printf("\n");
}

int main(){
    int d=0;
    struct data_t *w, head;
    head.prev = &head;
    head.next = &head;

    for(;scanf("%d", &d) != EOF ;){
        w=(struct data_t*)malloc(sizeof(struct data_t));
        w->data=d;
        struct data_t *p = insert_pos(&head, w);
        insert(p, w);
    }
    printasc(&head);
    printdsc(&head);

    return 0;
}

