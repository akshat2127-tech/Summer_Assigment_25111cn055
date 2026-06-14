#include<stdio.h>
int main(){
    int n, arr[10],i,j,temp;
    printf("enter number of digits-->");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("maximum element is %d \n",arr[n-1]);
    printf("minimum element is %d",arr[0]);
    return 0;
}