#include <stdio.h>
int main ()
{
int num,c=1,odd=0,even=0;
do
{
printf("Enter number ");
scanf("%d",&num);
if(nu%2==0)
even++;
else
odd++;
c++;
} while(c<=10)
printf("Odd %d \nEven %d",odd,even);
}
