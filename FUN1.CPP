#include<stdio.h>
#include<conio.h>
void myFunction()
{
printf("I just got executed");
}
int main()
{
clrscr();
myFunction();//call the function
getch();
return 0;
}