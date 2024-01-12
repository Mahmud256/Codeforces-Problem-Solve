n = int(input())
maximum = 0
minimum = 0

for i in range(n):
    a,b,c = map(int,input().split())

    maximum = max(a, max(b, c))
    minimum = min(a, min(b, c))

    if a != maximum and a != minimum:
        print(a)
    elif b != maximum and b != minimum:
        print(b)
    elif c != maximum and c != minimum:
        print(c)
