//Ionixx First Round
#include <stdio.h>
int func(int n)
{
    int i,s=n;//Declaration
    for(i=1;i<n;i++)//loop for finding n^n
        s*=n;
    return s;//return statement
}
int main()
{
   int n;//Declaration
   long long int s=0;//Declaration
   scanf("%d",&n);//getting input from user
   s=func(n)+(n*n);//function call
   printf("%lld",s);//printing statement
}
