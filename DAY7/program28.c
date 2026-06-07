#include<stdio.h>
int rem,rev=0;
int reverse(int number){
    if(number>0){
        rem=number%10;
        rev=rev*10+rem;
        reverse(number/10);
    }
    return rev;
}
int main(){
    int n,r;
    printf("enter the number-->");
    scanf("%d",&n);
    r=reverse(n);
    printf("reverse of number %d is %d", n, r);
    return 0;
}
