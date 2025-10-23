n = 4

#upper 
for i in range(n):
    for j in range(n):
        print(max(n-i,n-j),end=" ")
    for j in range(n-2,-1,-1):
        print(max(n-i,n-j),end=" ")
    print()

    
# lower
for i in range(n-2,-1,-1):
    for j in range(n):
        print(max(n-i,n-j),end=" ")
    for j in range(n-2,-1,-1):
        print(max(n-i,n-j),end=" ")
    print()

