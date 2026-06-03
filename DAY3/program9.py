a=int(input("enter a number-->"))
b=a//2
flag=0
for i in range(2,b+1):
    if a%i==0:
        flag=1
        break
if flag==0:
    print("the number is a prime number")
else:
    print("the number is not a prime number")