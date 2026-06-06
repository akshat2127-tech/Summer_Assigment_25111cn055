a=int(input("enter decimal number-->"))
str=""
while(a>0):
    b=a%2
    str= str(b)+ str
    a=a//2
print(str)
