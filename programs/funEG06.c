#include<stdio.h>
void arraySum(int arr[] , int size)
{
    int ans,i;
    ans = 0;
    for(i=0;i<size;i++)
    {
        ans += arr[i];
    }
    printf("\nAnswer : %d",ans);
}

void main()
{
    int myArr[3] = {4,6,7};

    arraySum(myArr,3);
}

