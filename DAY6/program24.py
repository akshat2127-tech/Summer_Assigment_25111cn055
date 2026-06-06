x=int(input("enter the number-->"))
n=int(input("enter power of",x,"you wanna find"))
product=1
for i in range(1,n+1):
    product*=x
print(product)
