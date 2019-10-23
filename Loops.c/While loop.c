#include <stdio.h>
int main ()
{
int nu,c=1,odd=0,even=0;
while(c<=10)
{
printf("Enter number ");
scanf("%d",&nu);
if(nu%2==0)
even++;
else
odd++;
c++;
}
printf("Odd %d \nEven %d",odd,even);
}