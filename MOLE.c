#include<stdio.h>
#include <Windows.h>
#include <stdbool.h>
#include <limits.h>
#include<stdlib.h>
#include <time.h>
#include < cstdio >
#include<conio.h>

#define WIDTH 41
#define HEIGHT 20



char board[HEIGHT][WIDTH];




void initialize();         //초기보드판
void display();            //화면출력
int Getnumber();           //화면클릭해서 두더지잡기
void range_int(int, int);       //구역나누기
void mole(int a, int b);
void mole_king(int a, int b);

int Getnumber() {
    int num = 0, ch;

    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') num = num * 10 + ch - '0';
        else if (ch == '\n') break;
        else {
            printf("\n");
            break;
        }
    }
    return num;
}


void initialize() {

    for (int i = 0; i < WIDTH; i++) {
        board[0][i] = board[HEIGHT - 1][i] = '#';
    }

    for (int i = 1; i < HEIGHT - 1; i++) {
        for (int j = 1; j < WIDTH - 1; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < HEIGHT; i++) {
        board[i][0] = board[i][WIDTH - 1] = '#';
    }


}

void display() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}





void mole_king(int a, int b) {


    board[a][b] = ' ';
    board[a][b + 1] = ' ';
    board[a][b + 2] = ' ';
    board[a][b + 3] = ' ';
    board[a][b + 4] = ' ';
    board[a][b + 5] = '@';
    board[a][b + 6] = '@';
    board[a][b + 7] = ' ';
    board[a][b + 8] = ' ';
    board[a][b + 9] = ' ';
    board[a][b + 10] = ' ';
    board[a][b + 11] = ' ';
    board[a][b + 12] = ' ';


    board[a + 1][b] = ' ';
    board[a + 1][b + 1] = ' ';
    board[a + 1][b + 2] = '$';
    board[a + 1][b + 3] = '$';
    board[a + 1][b + 4] = '$';
    board[a + 1][b + 5] = ' ';
    board[a + 1][b + 6] = ' ';
    board[a + 1][b + 7] = '$';
    board[a + 1][b + 8] = '$';
    board[a + 1][b + 9] = '$';
    board[a + 1][b + 10] = '$';
    board[a + 1][b + 11] = ' ';
    board[a + 1][b + 12] = ' ';

    board[a + 2][b] = ' ';
    board[a + 2][b + 1] = '$';
    board[a + 2][b + 2] = '$';
    board[a + 2][b + 3] = ' ';
    board[a + 2][b + 4] = ' ';
    board[a + 2][b + 5] = ' ';
    board[a + 2][b + 6] = ' ';
    board[a + 2][b + 7] = ' ';
    board[a + 2][b + 8] = ' ';
    board[a + 2][b + 9] = ' ';
    board[a + 2][b + 10] = '$';
    board[a + 2][b + 11] = '$';
    board[a + 2][b + 12] = ' ';

    board[a + 3][b] = '$';
    board[a + 3][b + 1] = '$';
    board[a + 3][b + 2] = ' ';
    board[a + 3][b + 3] = ' ';
    board[a + 3][b + 4] = '@';
    board[a + 3][b + 5] = ' ';
    board[a + 3][b + 6] = ' ';
    board[a + 3][b + 7] = ' ';
    board[a + 3][b + 8] = '@';
    board[a + 3][b + 9] = ' ';
    board[a + 3][b + 10] = ' ';
    board[a + 3][b + 11] = '$';
    board[a + 3][b + 12] = '$';

    board[a + 4][b] = '$';
    board[a + 4][b + 1] = '$';
    board[a + 4][b + 2] = ' ';
    board[a + 4][b + 3] = ' ';
    board[a + 4][b + 4] = ' ';
    board[a + 4][b + 5] = ' ';
    board[a + 4][b + 6] = 'O';
    board[a + 4][b + 7] = ' ';
    board[a + 4][b + 8] = ' ';
    board[a + 4][b + 9] = ' ';
    board[a + 4][b + 10] = ' ';
    board[a + 4][b + 11] = '$';
    board[a + 4][b + 12] = '$';

    board[a + 5][b] = '$';
    board[a + 5][b + 1] = '$';
    board[a + 5][b + 2] = ' ';
    board[a + 5][b + 3] = ' ';
    board[a + 5][b + 4] = ' ';
    board[a + 5][b + 5] = ' ';
    board[a + 5][b + 6] = ' ';
    board[a + 5][b + 7] = ' ';
    board[a + 5][b + 8] = ' ';
    board[a + 5][b + 9] = ' ';
    board[a + 5][b + 10] = ' ';
    board[a + 5][b + 11] = '$';
    board[a + 5][b + 12] = '$';

    board[a + 6][b] = '$';
    board[a + 6][b + 1] = '$';
    board[a + 6][b + 2] = '$';
    board[a + 6][b + 3] = '$';
    board[a + 6][b + 4] = '$';
    board[a + 6][b + 5] = '$';
    board[a + 6][b + 6] = '$';
    board[a + 6][b + 7] = '$';
    board[a + 6][b + 8] = '$';
    board[a + 6][b + 9] = '$';
    board[a + 6][b + 10] = '$';
    board[a + 6][b + 11] = '$';
    board[a + 6][b + 12] = '$';


}

void mole(int a, int b) {

    board[a][b] = ' ';
    board[a][b + 1] = ' ';
    board[a][b + 2] = ' ';
    board[a][b + 3] = '$';
    board[a][b + 4] = '$';
    board[a][b + 5] = '$';
    board[a][b + 6] = '$';
    board[a][b + 7] = '$';
    board[a][b + 8] = '$';
    board[a][b + 9] = '$';
    board[a][b + 10] = ' ';
    board[a][b + 11] = ' ';
    board[a][b + 12] = ' ';


    board[a + 1][b] = ' ';
    board[a + 1][b + 1] = ' ';
    board[a + 1][b + 2] = '$';
    board[a + 1][b + 3] = '$';
    board[a + 1][b + 4] = ' ';
    board[a + 1][b + 5] = ' ';
    board[a + 1][b + 6] = ' ';
    board[a + 1][b + 7] = ' ';
    board[a + 1][b + 8] = ' ';
    board[a + 1][b + 9] = '$';
    board[a + 1][b + 10] = '$';
    board[a + 1][b + 11] = ' ';
    board[a + 1][b + 12] = ' ';

    board[a + 2][b] = ' ';
    board[a + 2][b + 1] = '$';
    board[a + 2][b + 2] = '$';
    board[a + 2][b + 3] = ' ';
    board[a + 2][b + 4] = ' ';
    board[a + 2][b + 5] = ' ';
    board[a + 2][b + 6] = ' ';
    board[a + 2][b + 7] = ' ';
    board[a + 2][b + 8] = ' ';
    board[a + 2][b + 9] = ' ';
    board[a + 2][b + 10] = '$';
    board[a + 2][b + 11] = '$';
    board[a + 2][b + 12] = ' ';

    board[a + 3][b] = '$';
    board[a + 3][b + 1] = '$';
    board[a + 3][b + 2] = ' ';
    board[a + 3][b + 3] = ' ';
    board[a + 3][b + 4] = '^';
    board[a + 3][b + 5] = ' ';
    board[a + 3][b + 6] = ' ';
    board[a + 3][b + 7] = ' ';
    board[a + 3][b + 8] = '^';
    board[a + 3][b + 9] = ' ';
    board[a + 3][b + 10] = ' ';
    board[a + 3][b + 11] = '$';
    board[a + 3][b + 12] = '$';

    board[a + 4][b] = '$';
    board[a + 4][b + 1] = '$';
    board[a + 4][b + 2] = ' ';
    board[a + 4][b + 3] = ' ';
    board[a + 4][b + 4] = ' ';
    board[a + 4][b + 5] = ' ';
    board[a + 4][b + 6] = 'o';
    board[a + 4][b + 7] = ' ';
    board[a + 4][b + 8] = ' ';
    board[a + 4][b + 9] = ' ';
    board[a + 4][b + 10] = ' ';
    board[a + 4][b + 11] = '$';
    board[a + 4][b + 12] = '$';

    board[a + 5][b] = '$';
    board[a + 5][b + 1] = '$';
    board[a + 5][b + 2] = ' ';
    board[a + 5][b + 3] = ' ';
    board[a + 5][b + 4] = ' ';
    board[a + 5][b + 5] = ' ';
    board[a + 5][b + 6] = ' ';
    board[a + 5][b + 7] = ' ';
    board[a + 5][b + 8] = ' ';
    board[a + 5][b + 9] = ' ';
    board[a + 5][b + 10] = ' ';
    board[a + 5][b + 11] = '$';
    board[a + 5][b + 12] = '$';

    board[a + 6][b] = '$';
    board[a + 6][b + 1] = '$';
    board[a + 6][b + 2] = '$';
    board[a + 6][b + 3] = '$';
    board[a + 6][b + 4] = '$';
    board[a + 6][b + 5] = '$';
    board[a + 6][b + 6] = '$';
    board[a + 6][b + 7] = '$';
    board[a + 6][b + 8] = '$';
    board[a + 6][b + 9] = '$';
    board[a + 6][b + 10] = '$';
    board[a + 6][b + 11] = '$';
    board[a + 6][b + 12] = '$';

}

void range_int(int n, int m) {

    if (n == 1) {
        int a = 11;
        int b = 2;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }
    }
    else if (n == 2) {
        int a = 11;
        int b = 14;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }
    }
    else if (n == 3) {
        int a = 11;
        int b = 27;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }
    }
    else if (n == 4) {
        int a = 6;
        int b = 2;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }

    }
    else if (n == 5) {
        int a = 6;
        int b = 14;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }
    }
    else if (n == 6) {
        int a = 6;
        int b = 27;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }

    }
    else if (n == 7) {
        int a = 1;
        int b = 2;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }
    }
    else if (n == 8) {
        int a = 1;
        int b = 14;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }
    }
    else {
        int a = 1;
        int b = 27;

        mole(a, b);
        if (m == 1) {
            mole_king(a, b);
        }
    }


}







int main(void)
{
    int y = 0;
    char yes;
    int score = 0;
    int level;



    //초기화면 
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                       두더지 게임\n");
    printf("                  게임 시작하시겠습니까?\n");
    printf("\n");
    printf("\n");
    printf("                          Y / N\n");



    yes = getchar();
    switch (yes) {
    case 'y':

        printf("난이도를 설정해주세요.");
        printf("\n");
        printf("                          Nomal (1) / Hard (2)\n");
        scanf_s("%d", &level);


        printf("3초후 게임이 시작됩니다.\n\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        printf("3...");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        printf("2...");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        printf("1...");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        y = 1;
        break;

    case 'Y':


        printf("난이도를 설정해주세요.");
        printf("\n");
        printf("                          Nomal (1) / Hard (2)\n");
        scanf_s("%d", &level);




        printf("3초후 게임이 시작됩니다.\n\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        printf("3...");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        printf("2...");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        printf("1...");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
        y = 1;
        break;

    case 'n':
        y = 0;
        break;
        return 0;

    case 'N':
        y = 0;
        break;
        return 0;
    }








    int endTime = (unsigned)time(NULL);
    endTime += 30;
    system("cls");
    initialize();
    while (y) {
        srand((unsigned int)time(NULL));
        int startTime = (unsigned)time(NULL);
        printf("%d sec\n", endTime - startTime);
        printf("socre = %d\n", score);
        initialize();
        int xn = rand() % 9 + 1;
        int zn = rand() % 5 + 1;
        range_int(xn, zn);
        display();
        if (Getnumber() == xn) {
            score++;
        }

        Sleep(1000 / level);
        system("cls");
        if (endTime - startTime == 0) {
            break;
        }
    }

    printf("\n");
    Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
    printf("게임끝!!");
    Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
    Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
    Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
    printf("닉네임과 점수를 등록해주세요.");
    Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
    Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
    Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");

    printf("닉네임: ");
    char nick;
    scanf_s("%s", &nick);


}
