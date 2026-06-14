#include<stdio.h>
int main(){
    int n,arr[10],sum=0,avg;
    printf("enter number of digits in array-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("the sum is %d",sum);
    printf("\n");
    avg=sum/n;
    printf("the average is %d",avg);
    return 0;
}