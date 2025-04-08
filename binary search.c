#include<stdio.h>
int main()
{

    int a[20],i,n,search,low,high,mid;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter an array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter search number:");
    scanf("%d",&search);
    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==search){
            printf("%d number is found and position is %d",search,mid);
           return 0;
        }
        else if(a[mid]<search){
                low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    printf("number is not found:");


}
