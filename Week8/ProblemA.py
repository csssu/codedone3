
# Language: python
# ID: 63659
# QLink: https://quera.org/course/assignments/63659/problems
# Author: @Amirkhaskar

def is_zumkeller(n):
    divisors = [i for i in range(1, n + 1) if n % i == 0]
    
    if sum(divisors) % 2 != 0:
        return "Not Zumkeller!"
    
    target_sum = sum(divisors) // 2
    current_sum = 0
    chosen_divisors = []

    for divisor in sorted(divisors, reverse=True):
        if current_sum + divisor <= target_sum:
            current_sum += divisor
            chosen_divisors.append(divisor)

    if current_sum == target_sum:
        return "Zumkeller!"
    else:
        return "Not Zumkeller!"

# Get user input
n = int(input())
result = is_zumkeller(n)
print(result)
