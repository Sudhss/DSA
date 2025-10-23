# Input  : 4 
# Output :
# 1*2*3*4*17*18*19*20
#   5*6*7*14*15*16
#     8*9*12*13
#       10*11


n = int(input())
val = 1
for i in range(n):
    for j in range(2*i):
        print(" ",end="")
    for k in range(n-i):
        print(val,end="*")
        val+=1
    for l in range(n-i):
        print(((n+1)*n) - val+2 + l,end="*")
    print()