#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define Cols 80
#define Rows 24
void gotoxy(int col, int row) {
    printf("\033[%d;%dH", row, col);
}
int main() {
    system("clear");
    printf("\033[?25l");

    int col1 = Cols;
    int row1 = 1;
    int dir1 = -1;
    int col2 = 1;
    int row2 = Rows;
    int dir2 = 1;
    int total_steps = (Cols * Rows) / 2;
    int step = 0;

    while (step < total_steps) {
        gotoxy(col1, row1);
        printf("*");
        gotoxy(col2, row2);
        printf("*");
        fflush(stdout);
        usleep(5000);
        col1 += dir1;

        if (col1 < 1) {
            col1 = 1;
            row1++;
            dir1 = 1;
        }
        else if (col1 > Cols) {
            col1 = Cols;
            row1++;
            dir1 = -1;
        }
        col2 += dir2;
        if (col2 > Cols) {
            col2 = Cols;
            row2--;
            dir2 = -1;
        }
        else if (col2 < 1) {
            col2 = 1;
            row2--;
            dir2 = 1;
        }
        step++;
    }
    gotoxy(1, 26);
    printf("\033[?25h");
    printf("\n");
    getchar();
    return 0;
}
