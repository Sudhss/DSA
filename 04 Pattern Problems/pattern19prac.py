n = 4

# n-i n-j
for i in range(n):
    for j in range(n):
        print(max(n-j,n-i),end=" ")
    for j in range(n-2,-1,-1):
        print(max(n-j,n-i),end=" ")
    print()
for i in range(n-2,-1,-1):
    for j in range(n):
        print(max(n-j,n-i),end=" ")
    for j in range(n-2,-1,-1):
        print(max(n-j,n-i),end=" ")
    print()
    