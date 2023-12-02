# Language: python
# ID: 60572
# QLink: https://quera.org/course/assignments/60572/problems
# Author: @Amirkhaskar

def romanToInt(s):
    roman_dict = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
    
    result = 0
    prev_value = 0
    
    for char in s:
        curr_value = roman_dict[char]
        result += curr_value
        
        if prev_value < curr_value:
            result -= 2 * prev_value
        
        prev_value = curr_value
    
    return result

# Reading input
n = input().strip()

# Output
print(romanToInt(n))
