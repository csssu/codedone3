# Language: python
# ID: 63992
# QLink: https://quera.org/course/assignments/63992/problems
# Author: @Amirkhaskar

for t in range(int(input())):
	n=input()
	s=input()
	while '()' in s:
		s=s.replace('()','')
	print(len(s)//2)