#define MAX_SIZE 100
typedef int Element;
Element data[MAX_SIZE];

int size=0;

void error(char str[]){
    printf("%s\n",str);
    exit(1);
}

void init_list(void){
    size=0;
}

int is_empty(void){
    return size==0;
}

int is_full(void){
    return size==MAX_SIZE;
}

void insert(int pos,Element e){
    if(is_full()){
        error("overflow");
    }
    if(pos<0 ||pos>size){
        error("invalid position error");
    }
    for(int i=size-1;i>=pos;i--){
        data[i+1]=data[i];
    }
    data[pos]=e;
    size++;
}

Element delete(int pos){
    if(is_empty()){
        error("underflow");
    }
    if (pos<0 || pos>size){
        error("invalid position error");
    }
    Element e=data[pos];
    for(int i=pos+1;i<size;i++){
        data[i-1]=data[i];
    }
    size--;
    return e;
}

Element get_entry(int pos){
    if(is_empty()){
        error("underflow");
    }
    if (pos<0 || pos>size){
        error("invalid position error");
    }
    return data[pos];
}

void append(Element e){
    insert(size,e);
}

Element pop(void){
    return delete(size-1);
}

void replace(int pos,Element e){
    if (pos<0 || pos>size){
        error("invalid position error");
    }
    data[pos]=e;
}

int find(Element e){
    for(int i=0;i<size; i++){
        if(data[i]==e){
            return i;
        }
    }
    return -1;
}