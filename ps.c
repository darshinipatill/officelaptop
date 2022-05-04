#include <stdio.h>
void array_sort(int *a, int length)
{
    int index,value,t;
    int *p;
    
    for (index = 0; index< length; index++)
    {
        for (value = index + 1; value < length; value++)
        {
            if (*(p + index) < *(p + value))
            {
                t = *(p+ index);
                *(p + index) = *(p+ value);
                *(p+ value) = t;
            }
        }
    }
    for (index=0; index< length; index++)
    {
        printf("%d", a[index]);
    }
}
int main()
{
    int a[5] = {2, 1, 3, 4, 5};
    int index, length;
    length =sizeof(a) / sizeof(a[0]);
    int *p = a;
    printf("Enter array elements:");
    for (index = 0; index < length; index++)
    {
        printf("%d", *(p + index));
    }
    array_sort(a, length);
    return 0;
}
