from itertools import combinations
t = int(input())
for i in range(t):
    l = []
    flag = 0
    dela = 0
    n,m = list(map(int,input().split()))
    for j in range(n):
        l.append(int(input()))
    l.sort(reverse=True)    # Reverse sorting of the array
    for j in range(n):
        if(l[j]<=m):            
            del l[:j]        
            dela = 1
            break
        if(dela==1):break
    for j in range(1,n+1):
        perm = combinations(l,j)      # Store the combinations in the form of list in a variable
        for h in list(perm):
            if(sum(h)==m):            # If sum of any of the combinations is equal to the sum required
                flag=1               
                break                 
        if(flag==1):break
    if(flag==1): print("Yes")
    else:print("No")

"""
Explanation

Step 1: Make all the combinations possible of the array

Step 2: If required sum is found the break the loop and print yes
"""