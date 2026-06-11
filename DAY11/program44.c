#include <stdio.h>
int product=1;
int fact(int a){
    for(int i=1;i<=a;i++){
        product*=i;
    }
    return product;
}
int main(){
    int b,c;
    printf("enter the number-->");
    scanf("%d",&b);
    c= fact(b);
    printf("the factorial is %d",c);
    return 0;
}