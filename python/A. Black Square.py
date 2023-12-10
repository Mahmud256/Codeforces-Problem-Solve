a,b,c,d = map(int,input().split())
s = str(input())

sum = 0

for i in range(len(s)):
    if s[i]=='1':
        sum+=a
    elif s[i]=='2':
        sum+=b
    elif s[i]=='3':
        sum+=c
    elif s[i]=='4':
        sum+=d
print(sum)