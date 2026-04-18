#include <stdio.h>
#include<stdlib.h>

struct Waiting{
    int id;
    int nperson;
    char info[32];

};
typedef struct Waiting Element;

#include "CircularQueue.h"

int main(void){
    Element waiting[4]={
        {12,2,"010-XXXX-1234"},
        {13,4,"010-XXXX-5678"},
        {14,3,"010-XXXX-9101"},
        {15,2,"010-XXXX-1012"},
    };
    init_queue();
    for(int i=0;i<4;i++){
        printf("웨이팅 신청을 완료했습니다. 대기번호 %d, 인원 %d명\n",waiting[i].id,waiting[i].nperson);
        enqueue(waiting[i]);
    }

    while(!is_empty()){
        Element w=dequeue();
        printf("웨이팅 %d번 입장하실 차례입니다.(%d명,%s)\n",w.id,w.nperson,w.info);
    }
}