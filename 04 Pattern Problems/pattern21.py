# //  ABCDEDCBA -> 0
# //  ABCD DCBA
# //  ABC   CBA
# //  AB     BA
# //  A       A


n = 7

for i in range(n):
    for j in range(0,n-i):
        print(chr(65 + j),end= "")
    for l in range(2*i-1):
        print(" ",end= "")
    for k in range(n-i-1,-1,-1):
        if k == n-1:
            continue
        else:
            print(chr(65 + k),end= "")
    print()






