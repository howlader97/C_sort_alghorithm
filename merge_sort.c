#include<stdio.h>
int main()
{

    int a[40],i,n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("ënter array list:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("sorted list:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
void mergesort(int a[],int low,int high)
{

    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void merge(int a[],int low,int mid,int high)
{

    int i,j,k;
    int b[40];
    i=low;
    j=mid+1;
    k=low;

    while(i<=mid&&j<=high)
    {
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            k++;
            j++;
        }
    }
    if(i>mid)
    {
        while(j<=high){
            b[k]=a[j];
            k++;
            j++;
        }
    }
    else{

        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(i=low;i<=high;i++)
        a[i]=b[i];


}
