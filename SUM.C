#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c,d=0;                             //variable declare
 clrscr();                                 //clear screen
 printf("enter the number");               //printed message to take value
 scanf("%d",&a);                           //accepted value
 b=a;                                      //taken a value in b
 while(b!=0)                               //loop till b does not equal to 0
   {
     c=b%10;                                   // taken remainder of b in c
     d=d+c;                                    //added remainder
     b=b/10;                                  //division of 10 with b
   }
 printf("sum of numbers are: %d",d);      //printed sum of number result from d
getch();
}