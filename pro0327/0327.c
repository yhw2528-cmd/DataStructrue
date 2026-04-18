#include <stdio.h> 
/*
int main(void){
    char c,cA[10];
    int i,iA[10];
    float f,fA[10];
    double d,dA[10];
    printf("자료형 크기[bytes] \n");
    printf("   char형=%d c의 크기=%d",sizeof(char),sizeof(c));
    printf("   int형=%d i의 크기=%d",sizeof(int),sizeof(i));
    printf("   float형=%d f의 크기=%d",sizeof(float),sizeof(f));
    printf("   double형=%d d의 크기=%d",sizeof(double),sizeof(d));

    printf("배열의 크기[bytes] \n");
    printf("   cA형=%d cA의 크기=%d",sizeof(cA),sizeof(cA[0]));
    printf("   iA형=%d iA의 크기=%d",sizeof(iA),sizeof(iA[0]));
    printf("   fA형=%d fA의 크기=%d",sizeof(fA),sizeof(fA[0]));
    printf("   dA형=%d dA의 크기=%d",sizeof(dA),sizeof(dA[0]));

    printf("배열의 요소의 크기[bytes] \n");
    printf("   cA요소의 수=%d ",sizeof(cA)/sizeof(cA[0]));
    printf("   iA요소의 수=%d ",sizeof(iA)/sizeof(iA[0]));
    printf("   fA요소의 수=%d ",sizeof(fA)/sizeof(fA[0]));
    printf("   dA요소의 수=%d ",sizeof(dA)/sizeof(dA[0]));
}
*/
/*
void reset_variable(int x){
    x=0;
}
void reset_variable_reference(int *x){
    *x=0;
}
void reset_array(int a[],int len){
    for(int i=0;i<len;i++){
        a[i]=0;
    }
}
int main(void){

    int A[3]={10,20,30},x=2024;
    reset_variable(x);
    reset_array(A,3);

    printf("변수 초기화 (call by vlaue) x=%d\n",x); //x=2024

    reset_variable_reference(&x);
    printf("변수 초기화 (call by reference) x=%d\n",x); //x=0
    printf("배열 초기화 :");
    for(int i=0; i<3;i++){
        printf("A[%d]=%d",i,A[i]); 
    }
    printf("\n");
}*/