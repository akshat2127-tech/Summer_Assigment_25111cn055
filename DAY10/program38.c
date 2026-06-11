#include <stdio.h>
int main(){
    int i,j,rows,k;
    printf("enter number of rows-->");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(k=1;k<=rows-i;k++){
            printf(" ");
        }
        for(j=2*i-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}