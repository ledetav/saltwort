import itertools

count = 0
for digits in itertools.product(range(10), repeat=3):
    if digits.count(7) == 1:
        count += 1

print("There are", count, "integers between 0 and 999 containing exactly one digit 7.")