#include<stdio.h>
void main()
{
int year;
printf("%d enter the year");
scanf("%d",&year);
if(year%400==0)
printf("%d the year is leap year");
else
printf("%d the year is not leap year");
}
