# Language: python
# ID: 61975
# QLink: https://quera.org/course/assignments/61975/problems
# Author: @Amirkhaskar

import collections
def numRabbits(answers):
        c = collections.Counter(answers)
        sumi = sum((((c[i] + i) // (i + 1))* (i + 1)) for i in c)
        return sumi
        
inp = [int(x) for x in input().split()]
print(numRabbits(inp))