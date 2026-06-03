a=int(input("enter first number-->"))
b=int(input("enter second number-->"))
lcm=0
for i in range(1,b+1):
    for j in range(1,a+1):
        if (a*i)==(b*j):
            lcm=a*i
            break
        break 
print("the lcm of two numbers is",lcm)