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
    if (n == 1) {
        //1������
        for (int i = 11; i < 20; i++) {
            for (int j = 1; j < 14; j++) {
                board[i][j] = '#';
            }
        }
    }
    else if (n == 2) {
        //2������
        for (int i = 11; i < 20; i++) {
            for (int j = 14; j < 27; j++) {
                board[i][j] = '#';
            }
        }
    }
    else if (n == 3) {
        //3������
        for (int i = 11; i < 20; i++) {
            for (int j = 27; j < 40; j++) {
                board[i][j] = '#';
            }
        }
    }
    else if (n == 4) {
        //4������
        for (int i = 6; i < 13; i++) {
            for (int j = 1; j < 14; j++) {
                board[i][j] = '#';
            }
        }
    }
    else if (n == 5) {
        //5������
        for (int i = 6; i < 13; i++) {
            for (int j = 14; j < 27; j++) {
                board[i][j] = '#';
            }
        }
    }
    else if (n == 6) {
        //6������
        for (int i = 6; i < 13; i++) {
            for (int j = 27; j < 40; j++) {
                board[i][j] = '#';
            }
        }
    }
    else if (n == 7) {
        //7������
        for (int i = 1; i < 9; i++) {
            for (int j = 1; j < 14; j++) {
                board[i][j] = '#';
            }
        }
    }
    else if (n == 8) {
        //8������
        for (int i = 1; i < 9; i++) {
            for (int j = 14; j < 27; j++) {
                board[i][j] = '#';
            }
        }
    }
    else {
        //9������
        for (int i = 1; i < 9; i++) {
            for (int j = 27; j < 40; j++) {
                board[i][j] = '#';
            }
        }
    }
}






int main(void)
{
    srand((unsigned int)time(NULL)); //srand �Ἥ �Ź������� �������ֱ�
    initialize();
    while (1) {
        initialize();
        int xn = rand() % 9 + 1;
        range(xn);
        display();
        Sleep(1000);
        system("cls");
    }
    return 0;
}