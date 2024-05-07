def sliceNum(num):
    result=[]
    while num>0:
        temp=num%10
        result.insert(0,temp)
        num//=10
    return result

n=int(input(""))
if n>99 and n<1000:
    count=0
    for i in range(100,n+1):
        num=sliceNum(i)
        if num[0]+num[2]==2*num[1]:
            count+=1
    print(99+count)
elif n==1000:
    print(144)
else:
    print(n)