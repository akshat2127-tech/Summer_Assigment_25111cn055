
def prime_factors(x):
    my_list = []
    for no3 in range(2, int(x)):
        i = 0
        if x % no3 == 0:
            for a in range(1, int(no3)):
                if no3 % a == 0:
                    i = i + 1
            if i == 1:
                my_list.append(no3)
    return(max(my_list))
a=int(input("enter a number-->"))
b=prime_factors(a)
print(b)


