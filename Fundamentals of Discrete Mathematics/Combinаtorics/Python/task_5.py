from itertools import combinations

k, n = map(int, input().split())

for comb in combinations(range(n), k):
    print(*comb)