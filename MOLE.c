#include<stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <limits.h>
#include<stdlib.h>
#include <time.h>

#define WIDTH 41
#define HEIGHT 20



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

    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
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

    /* if //일반두더지
     printf("   $$$$$$$   \n");
     printf("  $$     $$  \n");
     printf(" $$       $$ \n");
     printf("$$  ^   ^  $$\n");
     printf("$$    o    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");

     else //맞은 두더지
     printf("   $$$$$$$   \n");
     printf("  $$     $$  \n");
     printf(" $$       $$ \n");
     printf("$$  x   x  $$\n");
     printf("$$    @    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");


     //왕두더지
     printf("     ☆      \n");
     printf("  $$$  $$$$  \n");
     printf(" $$       $$ \n");
     printf("$$  ^   ^  $$\n");
     printf("$$    o    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");

     printf("     ☆      \n");
     printf("  $$$  $$$$  \n");
     printf(" $$       $$ \n");
     printf("$$  ㅠ  ㅠ $$\n");
     printf("$$    <    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");
     */
}

void cilck() {

}

void range(int n) {
    //1번구역
    for (int i = 11; i < 20; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
    }
    //2번구역
    for (int i = 11; i < 20; i++) {
        for (int j = 14; j < 27; j++) {
            board[i][j] = '#';
        }
    }
    //3번구역
    for (int i = 11; i < 20; i++) {
        for (int j = 27; j < 40; j++) {
            board[i][j] = '#';
        }
    }
    //4번구역
    for (int i = 6; i < 13; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
    }
    //5번구역
    for (int i = 6; i < 13; i++) {
        for (int j = 14; j < 27; j++) {
            board[i][j] = '#';
        }
    }
    //6번구역
    for (int i = 6; i < 13; i++) {
        for (int j = 27; j < 40; j++) {
            board[i][j] = '#';
        }
    }
    //7번구역
    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
    }
    //8번구역
    for (int i = 1; i < 9; i++) {
        for (int j = 14; j < 27; j++) {
            board[i][j] = '#';
        }
    }
    //9번구역
    for (int i = 1; i < 9; i++) {
        for (int j = 27; j < 40; j++) {
            board[i][j] = '#';
        }
    }
}






int main(void)
{
    initialize();
    while (1) {
        display();
        Sleep(1000);
        system("cls");
    }
    return 0;
}