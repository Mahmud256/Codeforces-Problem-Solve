n = int(input())
a = list(map(int, input().split()))

s=0 
d=0 
l = 0 
r = n - 1 
t = n
z = 0

while t!=0:
    if z%2 == 0:
        if a[l]>=a[r]:
            s+=a[l]
            l+=1
        else:
            s += a[r]
            r-=1
    else:
        if a[l]>=a[r]:
            d+=a[l]
            l+=1
        else:
            d += a[r]
            r-=1
    
    t-=1
    z+=1

print(s,d)