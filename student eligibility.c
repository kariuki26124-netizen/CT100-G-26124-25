//simple C program
#include <stdio.h>

/*
Name:Kariuki Lewis Maina
Reg:CT100/G/26124/25
Description:Exam Eligibility
*/
int main() {
    float attendance, average_marks;

    // Input values
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
