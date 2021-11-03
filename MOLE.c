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

    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
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

    /* if //�Ϲݵδ���
     printf("   $$$$$$$   \n");
     printf("  $$     $$  \n");
     printf(" $$       $$ \n");
     printf("$$  ^   ^  $$\n");
     printf("$$    o    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");

     else //���� �δ���
     printf("   $$$$$$$   \n");
     printf("  $$     $$  \n");
     printf(" $$       $$ \n");
     printf("$$  x   x  $$\n");
     printf("$$    @    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");


     //�յδ���
     printf("     ��      \n");
     printf("  $$$  $$$$  \n");
     printf(" $$       $$ \n");
     printf("$$  ^   ^  $$\n");
     printf("$$    o    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");

     printf("     ��      \n");
     printf("  $$$  $$$$  \n");
     printf(" $$       $$ \n");
     printf("$$  ��  �� $$\n");
     printf("$$    <    $$\n");
     printf("$$         $$\n");
     printf("$$$$$$$$$$$$$\n");
     */
}

void cilck() {

}

void range(int n) {
    //1������
    for (int i = 11; i < 20; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
    }
    //2������
    for (int i = 11; i < 20; i++) {
        for (int j = 14; j < 27; j++) {
            board[i][j] = '#';
        }
    }
    //3������
    for (int i = 11; i < 20; i++) {
        for (int j = 27; j < 40; j++) {
            board[i][j] = '#';
        }
    }
    //4������
    for (int i = 6; i < 13; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
    }
    //5������
    for (int i = 6; i < 13; i++) {
        for (int j = 14; j < 27; j++) {
            board[i][j] = '#';
        }
    }
    //6������
    for (int i = 6; i < 13; i++) {
        for (int j = 27; j < 40; j++) {
            board[i][j] = '#';
        }
    }
    //7������
    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 14; j++) {
            board[i][j] = '#';
        }
    }
    //8������
    for (int i = 1; i < 9; i++) {
        for (int j = 14; j < 27; j++) {
            board[i][j] = '#';
        }
    }
    //9������
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