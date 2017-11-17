#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b;                                  //variable declare
clrscr();                                   //clear screen
for(i=1;i<=10;i++)                          //for loop from 0 to 10
{
for(a=1;a<=10;a++)                         //for loop from 0 to 10
{
b=a*i;                                     //multiplying value of a and i and storing in b
printf("%d*%d=%d\n",i,a,b);                //printing multiplying table of 1 to 10
}
}
getch();
}