#include <stdio.h>
int sum;
int addition(int x,int y){
    sum=x+y;
    return sum;
}
int main(){
    int a, b;
    printf("enter first number-->");
    scanf("%d", &a);
    printf("enter second number-->");
    scanf("%d", &b);
    printf("the sum is %d", addition(a,b));
    return 0;
}