n,k = map(int,input().split())
a = list(map(int,input().split()))

count = 0

for i in range(n):
    if 5 - a[i]>= k:
        count += 1

ans = count//3
print(ans)