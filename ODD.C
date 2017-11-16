#include<stdio.h>
#include<conio.h>
void main()
{
int i;                          //declared variable
clrscr();                       //clear screen
for(i=0;i<=10;i++)              //for i=0 to i=10 and increase value of i
{
if(i%2!=0)                      //if reaminder of i when divided by 2 does not equals to 0
printf("%d\n",i);               // print the values of i
}
getch();
}