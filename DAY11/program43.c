#include <stdio.h>
int flag=0;
void prime(int a){
    for(int i=2; i<=a/2; i++){
        if (a%i==0){
            flag=1;
            break;
        }    
    }
    if(flag==0){
        printf("entered number is prime");
    }
    else
        printf("entered number is not prime");
}
int main(){
    int b;
    printf("enter the number-->");
    scanf("%d",&b);
    prime(b);
    return 0;
}