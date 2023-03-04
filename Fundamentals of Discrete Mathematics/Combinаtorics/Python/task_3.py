count = 0

for num in range(1_000_000):
    num_str = str(num)
    has_duplicate = False
    for i in range(1, len(num_str)):
        if num_str[i-1] == num_str[i]:
            has_duplicate = True
            break
    if not has_duplicate:
        count += 1

print(count)