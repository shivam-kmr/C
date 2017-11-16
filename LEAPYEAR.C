#include<stdio.h>
#include<conio.h>

void main()
{
int a;                                           //declared variable
clrscr();                                        //clear screen
printf("enter the year to check:  ");           //accepted year
scanf("%d",&a);
if(a%4==0)                                     //check the divisilblity with 4
{
if(a%100==0)                                   //checked the divisiblity with 100
{
if(a%400==0)                                  //checked with 400
{
printf("year is leap");                      //year is leap is condotion satisfy
}
else
printf("year is not leap");                 //year is not leap if condition doesnot satisfy
}
else
printf("year is leap");                     //year is leap
}
else
printf("year is not leap");                //year is not leap
getch();
}