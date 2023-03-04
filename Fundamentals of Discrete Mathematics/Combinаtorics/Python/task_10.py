from itertools import permutations

n, k = map(int, input().split())

# creating a list of n elements
lst = list(range(n))

# generating all k-permutations of elements from the list
permutations_lst = permutations(lst, k)

# output permutations in lexicographic order
for p in sorted(permutations_lst):
    print(*p)