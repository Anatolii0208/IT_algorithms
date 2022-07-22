from itertools import combinations

n = int(input())

arr = [ i for i in range(1, n + 1) for j in range(n - i + 1)]

s = []

for i in range(n, 0, -1 ):
    for j in combinations(arr, i) :
        if sum(j ) == n:
            s.append(tuple(reversed(j)))
#print(set(s))
for i in sorted(set(s), key=s.index):
     print(*i)