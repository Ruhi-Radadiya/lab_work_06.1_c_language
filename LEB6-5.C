#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,i;
clrscr();
printf("Enter first year:");
scanf("%d",&n);
printf("Enter last year:");
scanf("%d",&m);
i=n;
while(i<=m){
if(i%4==0||i%100==0||i%400==0){
printf("%d\t",i);
}
i++;
}
getch();
}