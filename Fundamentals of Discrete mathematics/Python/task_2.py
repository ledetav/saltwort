count = 0

for i in range(1000):
    if str(i).count('7') == 1:
        count += 1

print("Number of integers between 0 and 999 containing exactly one digit 7:", count)