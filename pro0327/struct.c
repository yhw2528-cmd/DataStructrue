#include<stdio.h>

typedef struct{
    double real;
    double imag;

} Complex;

void reset_complex_val(Complex a){
    a.real=a.imag=0.0;
}
void reset_complex_ptr(Complex *a){
    a->real=a->imag=0.0;
}

void print_complex(Complex C){
    printf("%4.1f+%4.1f \n", C.real,C.imag);
}
void main(){
    Complex a={1.0,2.0};
    printf("초기화 이전: ");
    print_complex(a);
    reset_complex_val(a);
    

    printf("초기화 (call by value) 이후:");
    print_complex(a);

    reset_complex_ptr(&a);
    printf("초기화 (call by reference) 이후:");
    print_complex(a);
}