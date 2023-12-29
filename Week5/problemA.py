# Language: python
# ID: 62414
# QLink: https://quera.org/course/assignments/62414/problems
# Author: @Amirkhaskar
def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def find_farey_sequence(n, k):
    x1, y1, x2, y2 = 0, 1, 1, n
    while k != 1:
        m = (n + y1) // y2
        x3 = m * x2 - x1
        y3 = m * y2 - y1
        x1, y1, x2, y2 = x2, y2, x3, y3
        k -= 1
    
    numerator = x2
    denominator = y2
    gcd_value = gcd(numerator, denominator)
    numerator //= gcd_value
    denominator //= gcd_value
    
    return numerator, denominator

n, k = map(int, input().split())
if k == 1:
    numerator, denominator = 0, 1
else:
    numerator, denominator = find_farey_sequence(n, k - 1)
print(f"{numerator},{denominator}")

    
    
    
