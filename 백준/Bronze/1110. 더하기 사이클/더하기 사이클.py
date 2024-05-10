n=int(input())
temp = n
cycle = 0
while True:
    temp = (temp%10)*10 + ((temp//10)+(temp%10))%10
    cycle += 1
    if temp == n :
        break
print(cycle)