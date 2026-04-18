#define ROWS  3
#define COLS  3
#include<stdio.h>

/*
void printf_mat(int m[ROWS][COLS],char *str){
    printf("%s\n",str);
    for (int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}

void transepose_mat(int m[ROWS][COLS]){ // 배열로 받으려면 COLS가 꼭 필요함
    for (int i=0;i<ROWS;i++){
        for(int j=i+1;j<COLS;j++){
            int temp=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=temp;
        }
        printf("\n");
    }
}
int main(void){
    int mat[ROWS][COLS]={
        {4,0,1},
        {1,6,5},
        {7,3,6}
    };
    printf_mat(mat,"원래 행렬");
    transepose_mat(mat);
    printf_mat(mat, "전치행렬");
    return 0;
}*/