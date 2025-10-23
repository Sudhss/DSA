n = int(input("N = "))
for i in range(n):
    val = 1+i
    for j in range(i):
        print(" ",end="")
    for k in range(n-i):
        print(val,end = " ")
        val+=1
    print()
for i in range(n-2,-1,-1):
    val = 1+i
    for j in range(i):
        print(" ",end="")
    for k in range(n-i):
        print(val,end = " ")
        val+=1
    print()