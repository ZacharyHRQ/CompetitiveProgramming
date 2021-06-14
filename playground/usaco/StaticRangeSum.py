n,q = input().split(" ")
arr = []
for i in input().split(" "):
    arr.append(int(i))
prefix = [0]
for i in arr:
    prefix.append(i+prefix[-1])
for t in range(int(q)):
    l,r = map(int,input().split(" "))
    ans = prefix[r] - prefix[l]
    print(ans)
