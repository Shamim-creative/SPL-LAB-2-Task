#include <stdio.h>

void task7() {
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        printf("%.2lf is the second largest number.\n", a);
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        printf("%.2lf is the second largest number.\n", b);
    } else {
        printf("%.2lf is the second largest number.\n", c);
    }
}
