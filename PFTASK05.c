#include <stdio.h>
int main() {
    int counts[10] = {0};  
    int num;

    printf("Enter digits (0-9). Enter any other number to stop:\n");
    scanf("%d", &num);
    while (num >= 0 && num <= 9) {
        counts[num]++;   
        scanf("%d", &num);
    }
    printf("\nNumber   Occurrences\n");
    printf("0\t   %d\n", counts[0]);
    printf("1\t   %d\n", counts[1]);
    printf("2\t   %d\n", counts[2]);
    printf("3\t   %d\n", counts[3]);
    printf("4\t   %d\n", counts[4]);
    printf("5\t   %d\n", counts[5]);
    printf("6\t   %d\n", counts[6]);
    printf("7\t   %d\n", counts[7]);
    printf("8\t   %d\n", counts[8]);
    printf("9\t   %d\n", counts[9]);

    return 0;
}
