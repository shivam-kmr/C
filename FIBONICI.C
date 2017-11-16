#include<stdio.h>
#include<conio.h>

void main()
{
 int a=0,b=1,c;              //variable declare
 clrscr();                   //clear screen
 printf("%d",a);             //printing value of a
 printf("%d",b);             //printing value of b

 for(c=0;c<=10;c++)          //loop of c from 0 to 10 incrementing c
{
   c=a+b;                    // adding value of a and b in c
   printf("%d\n",c);         //printing value of c
   a=b;                      //putting value of b in a
   b=c;                      //putting value of c in b
}
getch();
}