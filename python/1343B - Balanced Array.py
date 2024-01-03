n = int(input())

for i in range(n):
    t = int(input())
    t = t // 2

    if t % 2 != 0:
        print("NO")
    else:
        print("YES")
        for i in range(1, t + 1):
            print(i * 2, end=" ")

        for i in range(1, t):
            print(i * 2 - 1, end=" ")

        print(3 * t - 1)
