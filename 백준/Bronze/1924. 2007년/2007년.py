x,y=map(int,input().split())
day=['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT','SUN']
month=[0,31,28,31,30,31,30,31,31,30,31,30,31]
result=0
for i in range(x):
    result+=month[i]
result=result+y
print(day[(result%7)-1])