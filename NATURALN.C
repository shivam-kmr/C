#include<stdio.h>
#include<conio.h>

void main()
{
int i;                                        //variable declare
clrscr();                                     //clear screen
printf("natural number in reverse is:");      //printing message
for(i=10;i>=1;i--)                            //for loop from till 10 to 1
printf("%d\n",i);                             //printing value of i
getch();
}