# 4 4 4 4 4 4 4
# 4 3 3 3 3 3 4
# 4 3 2 2 2 3 4
# 4 3 2 1 2 3 4
# 4 3 2 2 2 3 4
# 4 3 3 3 3 3 4
# 4 4 4 4 4 4 4


def max1(a,b):
    if a<b:
        return b
    return a
n = 4

def upper(n):
    for i in range(n):
        for j in range(n):
            print(max1(n - i, n - j), end=" ")
        for j in range(n-2,-1,-1):
            print(max1(n - i, n - j), end=" ")
        print()

def lower(n):
    for i in range(n-1,-1,-1):
        for j in range(n):
            print(max1(n - i, n - j), end=" ")
        for j in range(n-2,-1,-1):
            print(max1(n - i, n - j), end=" ")
        print()

upper(n)
lower(n)
