# Input : n = 5
# Output : 

#     E
#    D D
#   C   C
#  B     B
# A       A

n = int(input("Value of N: "))
for i in range(n):
    for j in range(n-i):
        print(" ",end="")
    print(chr(65+n-1))
    break
for i in range(1,n):
    for j in range(n-i):
        print(" ",end="")
    print(chr(65+n-i-1),end="")
    for k in range(2*i-1):
        print(" ",end="")
    print(chr(65+n-i-1),end="")
    print()