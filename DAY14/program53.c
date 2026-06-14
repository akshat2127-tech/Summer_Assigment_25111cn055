#include<stdio.h>
int main(){
    int arr[10],n,i,j,m,flag=0;
    printf("enter no. of digits in array-->");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to search-->");
    scanf("%d",&m);
    for(j=0;j<n;j++){
        if(arr[j]==m){
            printf("element found at %d \n",j);
        }
        else
            continue;
    }        
    return 0;
}    