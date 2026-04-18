// 쉽게 배우는 C자료구조(최영규, 생능 출판사, 2024)
// 참고파일 ch04/MazeDFSDeque.c

//-------------------------------------------------------------
// 코드 4.9 덱를 이용한 미로 탐색(DFS)


#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
struct Pos2D { int r; int c; };
typedef struct Pos2D Element;
#include "CircluarDeque.h"

#define MAZE_DIM 6
char map[MAZE_DIM][MAZE_DIM] = {
    { '1', '1', '1', '1', '1', '1' },
    { '0', '0', '1', '0', '0', '1' },
    { '1', '0', '0', '0', '1', '1' },
    { '1', '0', '1', '0', '1', '1' },
    { '1', '0', '1', '0', '0', 'x' },
    { '1', '1', '1', '1', '1', '1' },
};

void push_loc(int r, int c)
{
    if (r < 0 || c < 0 || r >= MAZE_DIM || c >= MAZE_DIM)
        return; // 미로 범위 밖의 위치
    if (map[r][c] != '0' && map[r][c] != 'x')
        return; // 갈 수 있는 칸이 아님
    Element pos = { r, c }; //pos는 시작 위치
    add_rear(pos);
}
Element pop_loc() //덱에서 이동하고 좌표 삭제
{
    return delete_rear();       // 후단 삭제(스택의 pop)
    // return delete_front();       // 후단 삭제(스택의 pop)
}

void print_maze() //현재 내가 있는 위치를 @로 표시
{
    Element here = get_rear();
    for (int r = 0; r < MAZE_DIM; r++) {
        for (int c = 0; c < MAZE_DIM; c++)
            if (here.r == r && here.c == c) printf("@");
            else printf("%c", map[r][c]);
        printf("\n");
    }
}

#include <windows.h>
void main()
{
    init_duque();       // 덱: 초기화
    push_loc(1, 0);     // 미로의 시작 위치를 저장

    Element prev = { -1, -1 };  // 이전 위치(되돌아 가고 있다라는 걸 보여주는 구조체)

    while (is_empty() == 0) {
        system("cls");
        print_maze();

        Element here = pop_loc(); //here=현재 위치
        int c = here.c;
        int r = here.r;

        // 이전 위치와 인접하지 않으면 되돌아간 것
        if (prev.r != -1) {
            int dr = r - prev.r;// 현재 값과 과거 값의 차이 
            int dc = c - prev.c;// 
            if (dr * dr + dc * dc > 1)//한칸 움직인게 아니라 여러칸 움직였다는 의미(
            //현재 prev=here을 넣어주지만 here은 dec으로부터 받는 중 deq은 값을 보여주고 삭제)
            //그래서 계속 길을 가다가 딱 막혔을 때 덱은 그 전에 값을 찾는데 그게 과거의 값과 차이날 가능성이큼
            //-로 움직일 가능성도 있음 위에서 아래나 오른쪽에서 왼쪽 그렇기 때문에 제곱해서 abs
                printf("\n↩ 되돌아가는 중...\n");
            else
                printf("\n");
        } else {
            printf("\n");
        }

        Sleep(500);     // <windows.h>

        if (map[r][c] == 'x') {
            printf("미로 탈출 성공\n");
            return;
        }
        else {
            map[r][c] = '.';    // 방문함
            push_loc(r - 1, c); // 상
            push_loc(r + 1, c); // 하
            push_loc(r, c - 1); // 좌
            push_loc(r, c + 1); // 우
        }
        prev = here;
    }
    printf("\n미로 탈출 실패\n");
}
