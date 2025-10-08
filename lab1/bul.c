#include <stdio.h>
int main() {
    int x;
    int y;
    scanf("%d", &x);
    if (x <= -41) {
        y = 13 * x * x / 11 - 6;
        printf("y = 13 * x * x / 11 - 6 = %d\n", y);
    } else if ((x > -21 && x <= 3) || x > 12){
        y = -14 * x - 20;
        printf("y = -14 * x - 20 = %d\n", y);
    } else {
        printf("не співпадає");
    }
    return 0;
}