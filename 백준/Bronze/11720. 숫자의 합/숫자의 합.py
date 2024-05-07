n=int(input(""))
a=int(input(""))
result=0
for i in range(n):
    result += a%10
    a //= 10
print(result)