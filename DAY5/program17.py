a=int(input("enter the number-->"))
b=a//2
sum=0
for i in range(1,b+1):
    if (a%i==0):
        sum+=i
if (sum==a):
    print("number is a perfect number")
else:
    print("number is not a perfect number")        
