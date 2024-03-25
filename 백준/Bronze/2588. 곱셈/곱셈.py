a=int(input(""))
b=list(map(int,input("")))
b.reverse()
ab=[]
result=0
for i in b:
    ab.append(a*i)
    print(a*i)
for i in range(3):
    result += ab[i]*(10**i)
print(result)