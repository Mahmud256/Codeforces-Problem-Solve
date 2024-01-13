n = int(input())

maximum=0
minimum=0
prov=0

for i in range(n):
    t = int(input())

    v = list(map(int, input().split()))

    maximum = float('-inf') 
    minimum = float('inf')

    for element in v:

        maximum = max(maximum, element)

        minimum = min(minimum, element)

    prov = maximum-minimum
    print(prov)