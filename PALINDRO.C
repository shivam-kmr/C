#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d=0;                      //variable declare
clrscr();                           //clear screem
printf("enter the number");        //printing message
scanf("%d",&a);                    //accepting number
b=a;                               //transfering value from a to b
while(a!=0)                       // while loop till a does not equal to zero
{
c=a%10;                            //divding a by 10 and putting value in c
d=d*10+c;                          //multiplying d wuth 10 and adding c
a=a/10;
}
if(d==b)                              // if value of d is equal to b
printf("number is palindrome");       // print message number is palindrome
else                                  //else
printf("number is not a palindrome"); //print message number is not palindrome

getch();
}