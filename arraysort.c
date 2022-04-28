#include <stdio.h>
int main()
{
    int a[5]={2,1,3,4,5};
    int i,j,temp;
    printf("Enter array elements:");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            

            }
        }
    } 
printf("Array elements:");
for(i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}
for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            

            }
        }
    } 
printf("Array elements:\n");
for(i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}
return 0;
}