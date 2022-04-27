#include<stdio.h>
int main()
{
int n=10;
long int result=1;
if(n<0) 
{
printf("error!");
}
else 
{
   for(int i=2;i<=n;++i)
   {
       result*=i;//result=result*1; 
   }
   printf("Factorial of %d=%li",n,result);
}
return 0;
}

