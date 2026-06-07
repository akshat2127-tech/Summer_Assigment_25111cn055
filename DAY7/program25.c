#include<stdio.h>
int fact(int x){
    if (x==0 || x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }    
}
int main(){
    int num, factorial;
    printf("enter any number-->");
    scanf("%d",&num);
    factorial= fact(num);
    printf("factorial of %d is %d",num,factorial);
    return 0;
}