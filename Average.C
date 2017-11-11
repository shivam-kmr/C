#include<stdio.h>
#include<conio.h>
void main()                                          //started main
{
int a,b;                                            // declare variable
int c,i,d;
clrscr();                                          //clear screen
printf("Enter the roll no of student: ");          //printed message
scanf("%d",&a);                                   //accepted roll no
for (i=0;i<3;i++)                                 //loop for accepting marks 3 times
{
printf("Enter the marks");                        //printing message
scanf("%d",&b);                                  //accepting marks
c=b+b;                                           //adding marks of 3 subject
}
printf("Total marks of student is: %d\n",c);    //printing total marks

d=c/3;                                           //average of marks
printf("Average of student marks is: %d",d);    //printing average of marks
getch();
}