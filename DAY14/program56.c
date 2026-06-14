#include<stdio.h>
int main(){
    int arr[10],n,i,j,k,temp;
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
    printf("the duplicates are \n");
    for(k=1;k<n;k++){
        if(arr[k]==arr[k-1]){
            printf("%d \n",arr[k]);
        }
    }
    return 0;
}    