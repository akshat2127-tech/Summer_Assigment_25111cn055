
b=0
c=1
n=int(input("enter the term you wanna find"))
for i in range(0,n):
    d=b+c
    b=c
    c=d
    if (i==n-2):
        print(b)
    else:
        continue    