#include<stdio.h>
int main()
{
    int a[6],n,i,j,f=0,b[10],c=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter %d elements in an array:\n\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        f=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
               f=1;
          break;
            }
          
        }
        if(f==0)
       {
        b[c]=a[i];
        c++;
       }    
    }
    printf("prime numbers:\n");
    for(i=0;i<c;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}


    