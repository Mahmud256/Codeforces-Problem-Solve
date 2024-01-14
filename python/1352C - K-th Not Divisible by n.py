n = int(input())
ans = 0

for i in range(n):
    n,k = map(int, input().split())

    ans = int(k + (k - 1) / (n - 1))

    print(ans)
