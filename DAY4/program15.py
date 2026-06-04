a=int(input("enter a number-->"))
c=a
d=a
count=0
flag=0
sum=0
while(a>0):
    a=a//10
    count+=1
print("number of digits are-->",count)
while(c>0):
    b=c%10
    sum+=b**count
    c=c//10
print("the sum is ",sum)
if d==sum:
    print("the number is an armstrong number")
else:
    print("the number is not an armstrong number")