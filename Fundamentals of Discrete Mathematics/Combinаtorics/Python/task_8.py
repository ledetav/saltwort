from itertools import product

def count_numbers(max_value: int, digits: str) -> int:
    count = 0
    for i in range(1, len(str(max_value)) + 1):
        for combination in product(digits, repeat=i):
            num = int("".join(combination))
            if num <= max_value:
                count += 1
            else:
                break
    return count

if __name__ == "__main__":
    max_value = 1000000
    digits = "89"
    result = count_numbers(max_value, digits)
    print(f"The number of numbers less than {max_value} that can be written using the digits {digits} is {result}.")