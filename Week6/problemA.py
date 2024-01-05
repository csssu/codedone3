
# Language: python
# ID: 62944
# QLink: https://quera.org/course/assignments/62944/problems
# Author: @Amirkhaskar



for _ in range(int(input())):
    n=int(input())
    s=input()
    used={(0,0):0}
    c={'L':(0,-1),'R':(0,1),'U':(-1,0),'D':(1,0)}
    x,y=0,0
    l,r=-1,n
    for i in range(n):
        x,y=x+c[s[i]][0],y+c[s[i]][1]
        if (x,y) in used:
            if i-used[(x,y)]+1<r-l+1:
                l,r=used[(x,y)],i
        used[(x,y)]=i+1
    if l!=-1:
        print(l+1,r+1)
    else:
        print(l)
