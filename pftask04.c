#include <stdio.h>

int main(){
    int age;
    char eyesight, written, driving, medical;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Not eligible\n");
        return 0;
    }

    printf("Enter eyesight test result (p OR f): ");
    scanf(" %c", &eyesight);
    if ( eyesight == 'f') {
        printf("Not eligible\n");
        return 0;
    }

    printf("Enter written test result (p\f): ");
    scanf(" %c", &written);
    if ( written == 'f') {
        printf("Not eligible\n");
        return 0;
    }

    printf("Enter driving test result (p\f): ");
    scanf(" %c", &driving);
    if ( driving == 'f') {
        printf("Not eligible\n");
        return 0;
    }

    if (age > 60) {
        printf("Enter medical certificate result (p\f): ");
        scanf(" %c", &medical);
        if ( medical == 'f') {
            printf("Not eligible\n");
            return 0;
        }
    }

    printf("Eligible\n");
    return 0;
}
