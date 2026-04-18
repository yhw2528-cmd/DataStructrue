#include <stdio.h>
#include <stdlib.h>

typedef char Element;
#include "ArrayStack.h"
int check_matching(char expr[])
{
    int i=0,prev;
    init_stack();

    while(expr[i] != '\0'){
        char ch=expr[i++];

        if(ch=='(' || ch=='{' || ch=='['){
            push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']'){
            if(is_empty()){
                return 2;
            }
            prev=pop();
            if(
                (ch==']' && prev !='[') || (ch=='}' && prev !='{') || (ch==')' && prev !='(')
            ){
                return 3;
            }


        }
    }
    if( !is_empty()){
        return 1;
    }
    else{
        return 0;
    }
}
int main(void){
    
    char expr[4][80]={
        "{A[(i+1)]=0}",
        "if((i==0) &&(j==0))",
        "while (n<8)){n++;}",
        "arr[(i+1]) =0;"
    };

    char expr2[100];
    printf("표현 문장을 입력하세요:");
    scanf("%s",&expr2);

    for(int i=0;i<1;i++){
        int errcode=check_matching(expr2);

        if(errcode==0){
            printf("%-20s-> 정상\n",expr[i]);

        }
        else{printf("%-20s-> 오류 (조건 %d 위반)\n",expr[i],errcode);}
    }
    return 0;
}