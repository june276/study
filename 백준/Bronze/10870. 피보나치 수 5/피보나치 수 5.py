def f(prev,next,check,n):
    if check+1==n:
        return next
    temp=next
    next=prev+temp
    prev=temp
    check+=1
    return f(prev,next,check,n)
n=int(input(""))
if n<2:
    print(n)
else:
    print(f(0,1,0,n))