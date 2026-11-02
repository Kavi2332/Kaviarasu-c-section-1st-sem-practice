#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n],sum=0;
float average=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum=arr[i];
    average=sum/n;
    }
    printf("average:%.2f",average);
}
