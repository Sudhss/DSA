n = 3
for i in range(n):
    for j in range(n-1):
        print(" ",end="")
    for j in range(n-i+1):
        print(" ",end="")
    for j in range(2*i+1):
        print("*",end="")
    print()

for i in range(n):
    for j in range(n+2):
        if(j == 0 or j == n+1 or i == n-1):
            print("e",end="")
        else:
            print(" ",end="")
            
    print()
