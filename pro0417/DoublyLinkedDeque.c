# include<stdio.h>
#include <stdlib.h>

typedef int Element;
#include "DoublyLinkedDeque.h"

void print_queue(char *msg) {
    printf("%s: ", msg);
    for (Node *p = front; p != NULL; p = p->Next) {
        printf("%d ", p->data);
    }
    printf("\n");
}
int main(void){
    init_queue();
    for(int i=1; i<7;i++){
        if(i%2){
            add_front(i);
        }
        else{
            add_rear(i);
        }
    }

    print_queue("enqueue 1~ 6:");
    for(int i=1; i<4;i++){
        if(i%2){
            delete_front();
        }
        else{
            delete_rear();
        }
    }

    print_queue("dequeue 4회:");
    
}