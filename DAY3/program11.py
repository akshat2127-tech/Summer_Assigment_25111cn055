a=int(input("enter first number-->"))
b=int(input("enter second number-->"))
gcd=0
for i in range(1,a+1):
    if (a%i)==0:
        for j in range(1,b+1):
            if (b%j)==0:
                if i==j:
                    gcd=i
            else:
                continue
    else:
        continue
if gcd==0:
    print("there is no common divisor")   
else:
    print("gcd is",gcd)