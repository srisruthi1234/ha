#include <stdio.h>
int main()
{
int n,rI=0,remainder,oI;
printf("Enter an integer:");
scanf("%d",&n);
originalInteger=n;
while( n!=0 )
{
remainder = n%10;
rI=rI*10+remainder;
n/=10;
}
if (oI==rI)
printf("%d is a palindrome",Io);
else
printf("%d is not a palindrome",oI);
return 0;
}
