#include<stdio.h>
#include<conio.h>
/****************************************************************
auther: pulkit
purpose: to read name from user and print it
*********************************************************/
void main()
{
    char name[30];
    printf(" enter your name:");
    scanf("%s",&name);
    printf("hii %s, welcome to c-programming",name);
    getch();

}
