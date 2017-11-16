#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=0;                                    //variable declare
clrscr();                                     //clear screen
for(i=1;i<=10;i++)                           //for loop from 1 to 10
{
a=a+i;                                      //adding all number and storing value in a
}
printf("sum of natural numbers are:%d ",a);  //printing message and sum of all natural number
getch();
}