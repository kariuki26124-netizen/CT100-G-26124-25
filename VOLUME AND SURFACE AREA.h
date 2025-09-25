/*
Name:Kariuki Lewis Maina
Reg:CT100/G/26124/25
Description:Volume and Surface area of a cylinder
*/

#include<stdio.h> //scanf(),printf()
//main function
int main()
{    //variable declaration and initialization=[[''
    char a;                 //%c
    char name[] = {};       //%s
    int age;                //%d
    float salary;           //%f
    double budget;          //%lf

    //Prompt user to enter value
    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your name:");
    scanf("%s", &name);

    printf("Enter your salary:");
    scanf("%d", &salary);

    printf("Enter your budget:");
    scanf("%lf", &budget);

    printf("Enter value of character:");
    scanf("%c", &a);//Added a space before %c to consume any leftover whitespace

    //Print the output to the user screen
    printf("The value of age is %d\n",age);
    printf("your name is %s\n",name);
    printf("The value of salary is %10.2f\n",salary);
    printf("The value of budget is %.2lf\n",budget);
    printf("The value of budget is %c\n", a);

    return 0
    }
