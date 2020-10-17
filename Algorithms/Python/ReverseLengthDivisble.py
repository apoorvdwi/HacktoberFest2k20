a= int(input())
b=str(a)
s=0
for i in range(len(b)):
    p=int(b[:i+1])
    if (p%(len(b)-i))==0:
        s+=1
if s==len(b):
    print("Yes")
else:print("No")