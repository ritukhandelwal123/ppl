def sq():
    s=0
    n=input('Enter the no. till which you want to sum of squares:')
    for i in range(1,n+1):
        s=s+(i*i)
        print('sum of square=',s)
sq()