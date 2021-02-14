def isBoring(num):
    num = str(num)
    l = len(num)
    for n in num.split():
        if (int(n) % 2 == 0) and l%2 != 0: 
            return False
        elif (int(n) %2 != 1) and l%2 == 0: 
            return False
    return True

t = int(input())
for i in range(t):
    a = 0
    l , r = input().split(" ")
    for j in (int(l),int(r)+1):
        a += isBoring(j)
    print(f"Case #" + {i+1} + ": "+ {a} )
