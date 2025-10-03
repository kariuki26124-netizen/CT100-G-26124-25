//Simple C program
#include <stdio.h>
/*
Name:Kariuki Lewis Maina
Reg:CT100/G/26124/25
Description:Water bill
*/
int main() {
    int units;
    float bill;

    // Input values
    printf("input units you consume: ");
    scanf("%d", &units);

    // Calculate total bill
    if (units <= 30) {
        bill = units * 20.0;
    }
    else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    }
    else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    //Check total bill
    printf("Total bill: %.2f KES\n", bill);

    return 0;
}

