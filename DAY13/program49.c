#include<stdio.h>
int main(){
    int n,arr[10];
    printf("enter number of digits in array-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}