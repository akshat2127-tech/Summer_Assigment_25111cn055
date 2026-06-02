a=int(input("enter the number you wanna check-->"))
temp=a
rev=0
while(a>0):
    b=a%10
    rev=rev*10+b
    a=a//10
print("reverse is",rev)
if (temp==rev):
    print("the number is palindrome")
else:
    print("the number is not a palindrome")