def swap(n,m):
    print("before swapping",n,m)
    temp=n
    n=m
    m=temp
    return n,m
a,b=swap(11,22)
print("after swapping:",a,b)