def leap():
    n=input('Enter a year:')
    if(n%100!=0 and n%4==0 or n%400==0):
        print('Leap yr')
    else:
        print('Not a leap yr')
leap()