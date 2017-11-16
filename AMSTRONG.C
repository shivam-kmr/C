#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d=0;                          //variable declare
clrscr();                              //clear screen
printf("enter 3 digit number: ");      //message to enter 3 digit number
scanf("%d",&a);                        //accepted 3 digit number in a
b=a;                                   //putten value of a in b
while(b!=0)                             //loop till b does not equals to zero
{
c=b%10;                                //divide number by 10 and store remainder in c
d=d+c*c*c;                             //multiple value of c 3 time and to d i.e result
b=b/10;
}
if(d==a)                               //now if result is equal to number
printf("number is amstrong");          //print message number is amstrong
else                                   //else
printf("number is not amstrong");       // print message number is not amstrong
getch();
}