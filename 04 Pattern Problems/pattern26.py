n = 7
n = (n//2)+1
# upper part
for i in range(n):
    for j in range(n-i-1):
        print(" ",end="")
    for j in range(i+1,0,-1):
        print(j,end="")
    for j in range(2,i+2):
        print(j,end="")
    print()

# lower part
for i in range(n-2,-1,-1):
    for j in range(n-i-1):
        print(" ",end="")
    for j in range(i+1,0,-1):
        print(j,end="")
    for j in range(2,i+2):
        print(j,end="")
    print()


