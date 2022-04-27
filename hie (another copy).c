#include<stdio.h>
int main()
{
int min=2,max=9;
int array[max-min];
for(int i=0, j=min;
i<(max-min) && j< max;
i++,j++)
array[i]=j;
// int even[4],odd[4];
// int even_len=0,add_len=0;
// even[even_len]=1;even_len++;
// even[even_len]=2;odd_len++;
// even[2];
printf("even numbers in array:\n");
for(int i=0;i<max-min;i++)
{
    if(array[i]%2==0)
    {
        printf("odd numbers in array:");

    }
}
printf("odd numbers in array:");
for(int i=0;i<max-min;i++)
{
    if (array[i]%2 !=0)
    {
        printf("%d",array[i]);
    }
}
    return 0;
}

