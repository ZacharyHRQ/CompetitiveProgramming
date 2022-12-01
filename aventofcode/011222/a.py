with open("input.txt") as f: 
    lines = f.readlines() 
    a = [] 
    i = 0
    v = 0
    while i < len(lines): 
        if lines[i] == "\n": 
            a.append(v)
            v = 0
            i += 1
            continue
        v += int(lines[i].split("\n")[0])
        i += 1
    a.sort()
    print(sum(a[::-1][0:3]))

