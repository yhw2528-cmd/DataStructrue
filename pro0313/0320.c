#include <stdio.h>
#include<string.h>
#include<stdlib.h>
/*
int main(){//간단한 이중포인터 예시
    int a=10,*p=&a, **pp=&p;
    printf("%d\n",*p);
    printf("%d\n",**pp);// pp의 주소의 값인 p값에서 한 번 더 역참조 a의 값!
    **pp=99;// p의 주소에서 한 번 더 역참조해서 a의 값!
    printf("%d\n",a);
    return 0;
}
*/
/*
void change_ptr(int **pp, int *new_addr){ //이중 포인터를 통해서 a의 값을 b로 변화
    *pp=new_addr; 
}
int main(){
    int a=10,b=20;
    int *p=&a;
    printf("%d\n",*p);
    change_ptr(&p,&b);
    printf("%d\n",*p);
    return 0;
}*/
/*
int main(){
    char str[]="Hello wolrd!"; //배열 문자열 즉 포인터

    printf("%s\n",str);
    printf("length %d",strlen(str));
    return 0;
}*/

//위의 거를 함수로 직접 구현 strlen
// strlen 직접 구현
/*
int my_strlength(const char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

void my_strcopy(char *dst, const char *src) {
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[] = "Hello world!";
    char str2[20];
    char str3[20];

    printf("%s\n", str);
    printf("length %d\n", strlen(str));
    printf("length %d\n", my_strlength(str));

    strcpy(str2, str);
    printf("%s\n", str2);

    my_strcopy(str3, str);
    printf("%s\n", str3);

    return 0;
}

*/
/*
int main(){
    int n;
    printf("배열 크기 입력:");
    scanf("%d",&n);

    int *arr=(int *)malloc(n * sizeof(int)); //동적할당은 heap에서 메모리 할당이기 때문에 훨씬 큰 메모리 차지 가능
    //malloc은 바이트 단위로 나오기 때문에 캐스팅 연산자를 앞에(int)를 사용해서 정수형 포인터로 변환
    //그래야지 int형 즉 4바이트 단위로 이동함
    if(arr==NULL){ printf("메모리 부족!\n"); return -1;}

    for(int i=0;i<n;i++){arr[i]=i*10;}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    free(arr);// 반드시 동적할당을 해제
    arr=NULL;//arr값이 특정 주소를 가지고 있다가 해제되었으니 이것 역시 null
    return 0;
}*/

/*
int add(int a,int b){ return a+b;}
int sub(int a,int b){ return a-b;}
int main(){
    int(*fp)(int,int)=add; //함수 포인터 선언 및 add함수 주소 초기화

    printf("%d\n",fp(3,4));
    fp=sub;
    
    printf("%d\n",fp(10,4));
    return 0;
}*/

/*
int cmp_asc(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

int cmp_des(const void *a,const void *b){
    return *(int*)b - *(int*)a;
}

int main(){
    int arr[]={100,20,1,200,120};

    // 함수 포인터 변수
    int (*cmp_func)(const void *,const void*) = cmp_asc;
    
    // 오름차순
    qsort(arr,5,sizeof(int),cmp_func);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    // 내림차순으로 변경
    cmp_func = cmp_des;
    
    qsort(arr,5,sizeof(int),cmp_func);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}*/