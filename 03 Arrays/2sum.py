# using python because we need hashmap , can also use C++, Java 

arr = [1,6,5,8,11]
target = 14
seen = {}
flag = False
for i in range(len(arr)):
    diff = target - arr[i]
    if diff in seen:
        print(f"({seen[diff]},{i})")
        flag = True
        break
    seen[arr[i]] = i

if not flag:
    print("No Such Combination")





