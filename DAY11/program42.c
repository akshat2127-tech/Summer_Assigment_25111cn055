#include <stdio.h>
int max(int a, int b){
    if (a>b){
        return a;
    }
    else
        return b;
}
int main(){
    int c,d;
    printf("enter first number-->");
    scanf("%d", &c);
    printf("enter second number-->");
    scanf("%d",&d);
    printf("maximum of two numbers is %d", max(c,d));
    return 0;
}