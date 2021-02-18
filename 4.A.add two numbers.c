#include<stdio.h>
#include<conio.h>
/**************************************************************************
*Author : Pulkit Choudhary
*Purpose: to read two numbers from the user and sum and average
*******************************************************************/
void main()
{
    int fn,sn,sum;
    float average;

    //read value from users
    printf("enter first number:");
    scanf("%d",&fn);
    printf("enter second number:");
    scanf("%d",&sn);

    //logic
    sum=fn + sn;
    average=sum/2.0;

    printf("sum = %d, average = %f",sum , average);
    getch();

}
