#include "CircularQueue.h"

void init_duque(void){
    init_queue();
}
void add_rear(Element val){
  
    enqueue(val);
}

Element delete_front(){
    return dequeue();
}

Element get_front(void){

    return peek();
}
//새로 추가된 코드 덱에서 
void add_front(Element val){
    if(is_full()){
        error("overflow Error!");
    }
    data[front]=val;
    front=(front-1+MAX_SIZE)%MAX_SIZE;
}

Element delete_rear(void){
    if (is_empty()){
        error("underflow Error1");
    }
    int prev=rear;
    rear=(rear-1+MAX_SIZE)%MAX_SIZE;
    return data[prev];
}

Element get_rear(){
    if(is_empty()){
        error("Underflow Error!");
    }
    return data[rear];
}
