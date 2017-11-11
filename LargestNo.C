#include<stdio.h>
#include<conio.h>

void main()                                 //started main
{
int a,b,c;                                 //declared variable
clrscr();                                  //clear screen
printf("Enter the 1 number:");            //printed message
scanf("%d",&a);                           //accepted 1st number
printf("Enter the 2 number:");            //printed message
scanf("%d",&b);                           //accepted 2nd number
printf("Enter the 3 number:");            //printed message
scanf("%d",&c);                          //accepted 3rd number
if (a>b)                                 //compared 1 and 2 number
{
if (a>c)                                //compared 2 and 3 number
{
printf("Biggest no is: %d",a);          //printed message 1 number is greatest
}
}
if (b>a)                               //compared 2 nd 1 number
{
if(b>c)                                //compared 2 and 3 number
{
printf("Biggest no is: %d",b);        //printed message 2 number is greatest
}
}
if (c>a)                              //compared 3 and 1 number
{
if(c>b)                               //compared 3 and 2 number
{
printf("Biggest no is: %d",c);        //printed message 3 number is greatest
}
}
getch();
}