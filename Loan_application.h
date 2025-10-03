/*
Name:Kariuki Lewis Maina
Reg:CT100/G/26124/25
Description:Loan Application
S_I=P*rate/100*time
*/

#incluude<stdio.h>

int main()
{
    //variable declaration
    float principle,rate,time,interest;

    //prompt user to enter amount
    printf("Enter principle amount:");
    scanf("%f", &principle);

    //prompt user to enter rate
    printf("\n Enter rate:");
    scanf("%f",&rate);

    //prompt user to enter time
    printf("\n Enter time:");
    scanf("%f",&time);

    //computer interest
    interest=principle*rate/100*time;

    //display interest
    printf("\n Simple Interest is Ksh.%.2f",interest);

    return 0;
}

