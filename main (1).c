#include <stdio.h>
int main()
{
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==target)
        {
            printf("%d",mid);
            return 0;
        }
        if(arr[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    printf("%d",left);
}