#include<stdio.h>
int main(){
    int arr[10],n,i,j,m,count=0;
    printf("enter no. of digits in array-->");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search-->");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(arr[i]==m){
            count+=1;
        }
    }
    printf("the frequency of %d is %d",m,count);
    return 0;
}    
