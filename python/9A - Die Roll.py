a,b = map(int, input().split())

maximum = max(a,b)

if maximum == 1:
    print('1/1')
elif maximum == 2:
    print('5/6')
elif maximum == 3:
    print('2/3')
elif maximum == 4:
    print('1/2')
elif maximum == 5:
    print('1/3')
else:
    print('1/6')