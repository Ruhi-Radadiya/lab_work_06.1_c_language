#include<stdio.h>
#include<conio.h>
void main()
{
int n=1,i;
clrscr();
printf("Enter number:");
scanf("%d",&i);
printf("Even number from 1 to %d is :\n",i);
while(n<=i){
if(n%2==0){
printf("%d\n",n);
}
n++;
}
getch();
}