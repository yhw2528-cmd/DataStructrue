typedef struct Node{
    Element data;
    struct Node * Next;
    struct Node * Prev;

    
}Node;

Node *rear=NULL;
Node *front=NULL;

Node* alloc_node(Element e){
    Node *p=(Node *)malloc(sizeof(Node));
    p->data= e;
    p->Next=NULL;
    p->Prev=NULL;
    return p;
}

Element free_node(Node *p){
    Element e=p->data;
    free(p);
    return e;
}

void error(char * str){
    printf("%s\n",str);
    exit(1);
}

int is_empty(void){
    return front==NULL && rear==NULL;
}

int is_full(void){
    return 0;
}

void init_queue(void){
    rear=NULL;
    front=NULL;
}


void add_front(Element e){
    Node *p=alloc_node(e);
    if(is_empty()){
        front= rear=p;
    }
    else{
        p->Next=front;
        front->Prev=p;
        front=p;
    }
}
void add_rear(Element e){
    Node *p=alloc_node(e);
    if(is_empty()){
        front= rear=p;
    }
    else{
        rear->Next=p;
        p->Prev=rear;
        rear=p;
    }
}

void delete_front() {
    if (is_empty()) return;

    Node *p = front;
    if (front == rear) { 
        front = rear = NULL;
    } else {            
        front = front->Next;
        front->Prev = NULL;
    }
    free_node(p);
}

void delete_rear() {
    if (is_empty()) return;

    Node *p = rear;
    if (front == rear) { 
        front = rear = NULL;
    } else {             
        rear = rear->Prev;
        rear->Next = NULL;
    }
    free_node(p);
}


Element get_front(void){
    if(is_empty()){
        error("Underflow Error!");
    }
    return front->data;

}

Element get_rear(void){
    if(is_empty()){
        error("Underflow Error!");
    }
    return rear->data;

}

void destroy_stack(void){
    while(is_empty()==0){
        delete_rear();
    }
}

int size(void) {
    int count = 0;
    for (Node *p = front; p != NULL; p = p->Next) {
        count++;
    }
    return count;
}