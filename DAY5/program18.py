a=int(input("enter a number-->"))
b=a
sum=0
while(a>0):
    product=1
    b=a%10
    for i in range(1,b+1):
        product*=i
    sum+=product
    a=a//10
if b==sum:
    print("the number is a strong number")
else:
    print("the number is not a strong number")    