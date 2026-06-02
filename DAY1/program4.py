a=int(input("enter the number-->"))
count=0
while(a>0):
    a=a//10
    count+=1
print("the number of digits are",count)