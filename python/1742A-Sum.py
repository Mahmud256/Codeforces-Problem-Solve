n = int(input())

for i in range(1, n+1):
    a, b, c = map(int, input().split())
    m = max(a, b, c)

    if m == a:
        if m == b + c:
            print("YES")
        else:
            print("NO")
    elif m == b:
        if m == a + c:
            print("YES")
        else:
            print("NO")
    elif m == c:
        if m == a + b:
            print("YES")
        else:
            print("NO")
