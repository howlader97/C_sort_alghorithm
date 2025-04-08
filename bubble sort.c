#include<stdio.h>
int main()
{

    int a[30],i,n,j,ss;
    printf("enter array length:");
    scanf("%d",&n);
    printf("enter array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                ss=a[j];
                a[j]=a[j+1];
                a[j+1]=ss;
            }
        }
     }
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}




}



