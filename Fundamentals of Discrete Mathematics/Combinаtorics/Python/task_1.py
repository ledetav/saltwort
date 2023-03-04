#function for input sets
def input_set():
    while True:
        user_input = input().strip().split()
        try:
            set_int = set(map(int, user_input))
            return set_int
        except ValueError:
            print("Error: set can only consist of integers")

#entering sets
print("Enter set A (enter values separated by a space):")
set_a = input_set()

print("Enter set B (enter values separated by a space):")
set_b = input_set()

print("Enter set C (enter values separated by a space):")
set_c = input_set()

print("Enter set U (enter values separated by a space):")
set_u = input_set()

#calculating the expression
result = (set_a | set_b) & (set_u - set_c)

#outputing the result
print("Transformed set:", result)