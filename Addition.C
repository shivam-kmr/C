#include<stdio.h>
#include<conio.h>
void main()                                  //started main
{
int a,b,c;                                   //declaring variables
clrscr();                                    //clear screen
printf("Enter the first number:");           //printed message
scanf("%d",&a);                             //accepting first number
printf("Enter the second number:");
scanf("%d",&b);                             //accepting second number
c=a+b;                                      //adding two number
printf("Addition of two number is:%d",c);   //printing addition of two number
getch();
}