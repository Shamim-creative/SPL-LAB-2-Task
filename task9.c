#include <stdio.h>

void task9() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0) {
        printf("%.2lf is Positive.\n", num);
    } else if (num < 0) {
        printf("%.2lf is Negative.\n", num);
    } else {
        printf("The number is Zero.\n");
    }
}
