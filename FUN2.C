#include<stdio.h>
#include<conio.h>
void myFunction()
{
printf("\nI just got executed");
}
int main()
{
clrscr();
myFunction();//call the function
myFunction();
myFunction();
myFunction();
getch();
return 0;
}