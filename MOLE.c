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

void initialize();         //�ʱ⺸����
void display();            //ȭ�����
void mole();               //�δ�������
void click();              //ȭ��Ŭ���ؼ� �δ������
void range(int);           //����������



void initialize() {
    // ��, �Ʒ� ���κ� horizontal walls
    for (int i = 0; i < WIDTH; i++) {
        board[0][i] = board[HEIGHT - 1][i] = '#';
    }

    // ������ ���� inner space
    for (int i = 1; i < HEIGHT - 1; i++) {
        for (int j = 1; j < WIDTH - 1; j++) {
            board[i][j] = ' ';
        }
    }

    // ��, �� ���κ� vertical walls
    for (int i = 0; i < HEIGHT; i++) {
        board[i][0] = board[i][WIDTH - 1] = '#';
    }
}

void display() {
    printf("socre = %d\n", score); //���� ���ھ��� ���
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
    srand((unsigned int)time(NULL)); //srand �Ἥ �Ź�����
    initialize();
    while (1) {


        //move();
        display();
        Sleep(1000);
        system("cls");
    }
    return 0;
}