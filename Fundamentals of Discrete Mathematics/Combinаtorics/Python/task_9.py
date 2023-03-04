import itertools

def generate_combinations(digits):
    """Generates all possible combinations of 6 digits from the given ones."""
    return itertools.product(digits, repeat=6)

# Numbers to create combinations
even_digits = ['0', '2', '4', '6', '8']
odd_digits = ['1', '3', '5', '7', '9']

# Generating all combinations of 6 even digits
even_combinations = generate_combinations(even_digits)

# Generating all combinations of 6 odd digits
odd_combinations = generate_combinations(odd_digits)

# Counting the number of six-digit numbers
count = sum(1 for digits in even_combinations if all(int(digit) % 2 == 0 for digit in digits) and digits[0] != '0')
count += sum(1 for digits in odd_combinations if all(int(digit) % 2 == 1 for digit in digits) and digits[0] != '0')

print(count)