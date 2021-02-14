from collections import Counter
n = [] 

with open('d1input.txt','r') as file: 
  for i in file.readlines(): 
    n.append(i.strip())

d = Counter(n)

t = 0
for i in d.keys():
  target = 2020 - int(i)
  print(target , int(i))
  if str(target) in d.keys():
    t = max( ( target * int(i)) , t)

print(t)
  
