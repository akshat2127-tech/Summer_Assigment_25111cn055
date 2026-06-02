a=int(input("enter the number-->"))
product=1
while(a>0):
    b=a%10
    product*=b
    a=a//10
print("the product is ->",product)