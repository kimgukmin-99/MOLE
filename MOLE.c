#include<stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <limits.h>
#include<stdlib.h>
#include <time.h>

#define WIDTH 79
#define HEIGHT 31

char board[HEIGHT][WIDTH];
int score = 0;

void initialize();         //초기보드판
void display();            //화면출력
void mole();               //두더지등장
void click();              //화면클릭해서 두더지잡기
void range(int);           //구역나누기



void initialize() {
    // 위, 아래 가로벽 horizontal walls
    for (int i = 0; i < WIDTH; i++) {
        board[0][i] = board[HEIGHT - 1][i] = '#';
    }

    // 안쪽의 공백 inner space
    for (int i = 1; i < HEIGHT - 1; i++) {
        for (int j = 1; j < WIDTH - 1; j++) {
            board[i][j] = ' ';
        }
    }

    // 좌, 우 세로벽 vertical walls
    for (int i = 0; i < HEIGHT; i++) {
        board[i][0] = board[i][WIDTH - 1] = '#';
    }
}

void display() {
    printf("socre = %d\n", score); //맨위 스코어판 출력
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

void mole() {
    printf("**********\n");
    printf("**********\n");
    printf("**********\n");
    printf("**********\n");
}


void range(int n) {

}






int main(void)
{
    srand((unsigned int)time(NULL)); //srand 써서 매번랜덤
    initialize();
    while (1) {


        //move();
        display();
        Sleep(1000);
        system("cls");
    }
    return 0;
}