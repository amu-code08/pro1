#include <stdio.h>
#include <stdlib.h>

struct number {
    struct number *prev, *next;
    int num;
};

void createnum(struct number *head, struct number *p_prev, int n, struct number *p){
    p->num = n;
    p->next=head;
    p->prev=p_prev;
    p_prev->next=p;
    head->prev = p;
};

void printnums(struct number *head){
    struct number *p;
    printf("number list: ");
    for (p = head->next; p != head; p= p->next){
        printf("%d ",p->num);
    }
    printf("\n");
    printf("number list: ");
    for (p = head->prev; p != head; p= p->prev){ 
        printf("%d ",p->num);
    }
    printf("\n");
};

int main(){
    int i, temp;
    struct number *prev,*head;
    head=(struct number*)malloc(sizeof(struct number));
    head->next=head;
    head->prev=head;
    prev=head;
    printf("input 5 numbers:");
    for(i=0; i<5; i++){
        scanf("%d", &temp);
        struct number *p;
        p=(struct number*)malloc(sizeof(struct number));
        createnum(head, prev, temp, p);
        prev=p;
    }
    printnums(head);
    return 0:
}
