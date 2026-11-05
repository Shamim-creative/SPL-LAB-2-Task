#include <stdio.h>

void task8() {
    double side1, side2, side3;
    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides cannot form a valid triangle.\n");
    }
}
