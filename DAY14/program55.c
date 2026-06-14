#include<stdio.h>
int main(){
    int arr[10],n,i,j,temp;
    printf("enter no. of digits in array-->");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("the second largest element is %d",arr[n-2]);
    return 0;
}                