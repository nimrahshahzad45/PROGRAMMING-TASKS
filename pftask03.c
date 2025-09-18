#include <stdio.h>

int main() {
    int c1, c2, c3, c4, c5;
    int card[14] = {0}; 

    
    printf("Enter 5 card values (1 to 13): ");
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);

    
    card[c1] = card[c1] + 1;
    card[c2] = card[c2] + 1;
    card[c3] = card[c3] + 1;
    card[c4] = card[c4] + 1;
    card[c5] = card[c5] + 1;

    int three = 0, two = 0;

    // Check counts (decision only, expanded form)
    if (card[1] == 3) three = 1;
    else if (card[2] == 3) three = 1;
    else if (card[3] == 3) three = 1;
    else if (card[4] == 3) three = 1;
    else if (card[5] == 3) three = 1;
    else if (card[6] == 3) three = 1;
    else if (card[7] == 3) three = 1;
    else if (card[8] == 3) three = 1;
    else if (card[9] == 3) three = 1;
    else if (card[10] == 3) three = 1;
    else if (card[11] == 3) three = 1;
    else if (card[12] == 3) three = 1;
    else if (card[13] == 3) three = 1;

    if (card[1] == 2) two = 1;
    else if (card[2] == 2) two = 1;
    else if (card[3] == 2) two = 1;
    else if (card[4] == 2) two = 1;
    else if (card[5] == 2) two = 1;
    else if (card[6] == 2) two = 1;
    else if (card[7] == 2) two = 1;
    else if (card[8] == 2) two = 1;
    else if (card[9] == 2) two = 1;
    else if (card[10] == 2) two = 1;
    else if (card[11] == 2) two = 1;
    else if (card[12] == 2) two = 1;
    else if (card[13] == 2) two = 1;

    if (three == 1 && two == 1)
        printf("Full House\n");
    else
        printf("Not a Full House\n");

    return 0;
}
