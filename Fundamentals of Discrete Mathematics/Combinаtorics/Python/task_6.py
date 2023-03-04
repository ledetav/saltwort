import numpy as np

# We determine the number of digits in the number
n = 10

# Determine the length of the number
k = 6

# Determine the maximum possible sum of digits
max_sum = 47

# Creating a matrix to store the number of possible numbers
# with a given sum of digits for each length of the number
count = np.zeros((max_sum+1, k+1))

# Initialize the first row of the matrix
# (for numbers of length 0)
count[0, 0] = 1

# Filling in the matrix using dynamic programming
for s in range(1, max_sum+1):
    for i in range(1, k+1):
        for j in range(n):
            if s >= j:
                count[s, i] += count[s-j, i-1]

# Sum up the number of possible numbers for all sums of digits
result = int(np.sum(count[:, k]))

# Output the result
print(result)