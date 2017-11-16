#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;                           //variable declare
clrscr();                            //clear screen
printf("enter the number");         // printing message to enter number
scanf("%d",&a);                    // accepting number
for(i=1;i<=10;i++)                 //for loop from 1 to 10
{
b=a*i;                             //multiplying accepted number with value of i
printf("%d*%d=%d\n",a,i,b);        //printing table of accepted number
}
getch();
}