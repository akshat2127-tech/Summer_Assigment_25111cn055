a=int(input("enter lower limit-->"))
b=int(input("enter upper limit-->"))
for i in range(a,b+1):
    sum=0
    count=0
    c=i
    d=i
    e=i
    while(c>0):
        c=c//10
        count+=1
    while(d>0):
        e=d%10
        sum+=e**count
        d=d//10
    if i==sum:
        print(i)    