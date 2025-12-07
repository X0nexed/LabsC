#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int n = 8;
    int matrix[10][10];
    int currentDiag = 10;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {

                currentDiag += 1 + (rand() % 10);
                matrix[i][j] = currentDiag;
            } else {
                matrix[i][j] = 10 + rand() % 90;
            }
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    int x;
    printf("\nВведіть X ");
    scanf("%d", &x);

    int l = 0, r = n - 1, m, idx = -1;

    while (l <= r) {
        m = (l + r) / 2;
        if (matrix[m][m] == x) {
            idx = m;
            break;
        }
        if (matrix[m][m] < x) l = m + 1; else r = m - 1;
    }

    if (idx != -1) {
        printf("Число %d \n", x);
        printf("рядок %d, стовпець %d\n", idx + 1, idx + 1);
    } else {
        printf("Число %d не знайдено на головній діагоналі.\n", x);
    }

    return 0;
}
