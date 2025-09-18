#include <stdio.h>

int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The point (%d, %d) lies in Quadrant \n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) lies in Quadrant \n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) lies in Quadrant 3\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) lies in Quadrant 4\n", x, y);
    else
        printf("The point (%d, %d) lies on the axis\n", x, y);

    return 0;
}