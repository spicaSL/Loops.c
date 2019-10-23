#include <stdio.h>
int main()
{
int i,nu,sum=0;
float avg;
for(i=0;i<10;i++)
{
printf("Enter %d number:",i+1);
scanf("%d",&nu);
sum=sum+nu;
}
avg=sum/10;
printf("Average is %.2f",avg);
}