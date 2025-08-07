n = int(input())

for i in range(n):
    a,b = map(int, input().split())

    sum = a+b

    if sum%2==0:
        print("Bob")
    else:
        print("Alic")    