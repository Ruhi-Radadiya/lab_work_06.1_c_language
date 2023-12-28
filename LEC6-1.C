#include<stdio.h>
#include<conio.h>
void main()
{
int num=1,n;
clrscr();
printf("enter number:");
scanf("%d",&n);
while(num<=n){
printf("%d\n",num);
num++;
}
getch();
}