#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    while(i<5)
        {
            printf("Enter element at index %d:", i);
            scanf("%d", &arr[i]);
            i++;
        }
    i=0;
        while(i<5)
        {
            sum=sum+arr[i];
            i++;
        }
    printf("\n Sum of all array elements = %d", sum);

    return 0;
}