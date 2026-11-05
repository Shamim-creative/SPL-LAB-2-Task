#include <stdio.h>

void task5() {
    char grade;
    printf("Enter letter grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
        case 'a':
            printf("Grade Point: 4.0 (Marks: 80 - 100)\n");
            break;
        case 'B':
        case 'b':
            printf("Grade Point: 3.0 (Marks: 70 - 79)\n");
            break;
        case 'C':
        case 'c':
            printf("Grade Point: 2.0 (Marks: 60 - 69)\n");
            break;
        case 'D':
        case 'd':
            printf("Grade Point: 1.0 (Marks: 50 - 59)\n");
            break;
        case 'F':
        case 'f':
            printf("Grade Point: 0.0 (Marks: Below 50 - Fail)\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }
}
