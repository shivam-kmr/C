#include<stdio.h>
#include<conio.h>
void main()                          //started main
{
int a;                               //declared variable
clrscr();                            //clear screen
printf("enter the number:");        //printed message to enter the number
scanf("%d",&a);                     //accepted the number
if(a%2==0)                          //divided number by two if remainder is 0
{
printf("number is even");          //printed message number is even
}
else                               //if condition is not satisfied
printf("number is odd");          //printed message number is odd
getch();
}