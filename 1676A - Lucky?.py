n = int(input())

for i in range(1,n+1):
    a,b,c,d,e,f = map(int,input())
    
    if a+b+c==d+e+f:
        print("Yes")
    else:
        print("No")
