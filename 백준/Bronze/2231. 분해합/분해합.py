n=int(input())
sum=[]
for i in range(n):
    num=i
    s=i
    while num>0:
        temp = num%10
        s+=temp
        num//=10
    sum.append(s)
if n in sum:
    print(sum.index(n))
else:
    print(0)