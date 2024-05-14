a,b=input("").split()
a=list(a)
b=list(b)
a.reverse()
b.reverse()
for i in range(3):
    if a[i]>b[i]:
        big=a
        break
    elif a[i]<b[i]:
        big=b
        break
result=''
for i in big:
    result+=i
print(result)