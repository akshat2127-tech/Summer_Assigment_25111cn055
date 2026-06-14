#include<stdio.h>
int main(){
    int arr[10],evencount=0,oddcount=0,n,i,j;
    printf("enter no. of digits in array-->");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<=n-1;j++){
        if(arr[j]%2==0){
            evencount+=1;
        }
        else
            oddcount+=1;
    }
    printf("the number of even elements are %d \n",evencount);
    printf("the number of odd elements are %d",oddcount);
    return 0;
}