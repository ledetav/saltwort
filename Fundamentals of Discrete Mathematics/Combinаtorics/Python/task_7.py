def count_strings(n: int, k: int) -> int:
    # creating two-dimensional arrays for f and g
    f = [[0] * (k + 1) for _ in range(n + 1)]
    g = [[0] * (k + 1) for _ in range(n + 1)]

    # setting the initial values for f and g
    f[1][0], f[1][1] = 1, 1
    g[1][1] = 1

    # filling in arrays f and g
    for i in range(2, n + 1):
        for j in range(k + 1):
            f[i][j] = f[i - 1][j] + g[i - 1][j]
            if j > 0:
                g[i][j] = f[i - 1][j - 1]

    # we return the result - the number of rows of length n with k units
    return f[n][k]


n = 42
k = 7
result = count_strings(n, k)
print(f"The number of binary strings of length {n} with {k} units in which no two units stand side by side: {result}")