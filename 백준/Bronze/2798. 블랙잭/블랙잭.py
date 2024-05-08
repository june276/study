n,m=map(int,input("").split())
cards=list(map(int,input("").split()))
sum=[]
for i in cards:
    if n<0:
        break
    for j in cards:
        if n<0:
            break
        for k in cards:
            if n<0:
                break
            if i!=j and j!=k and k!=i:
                if i+j+k<m:
                    sum.append(i+j+k)
                elif i+j+k==m:
                    print(m)
                    n=-1
if n>0:
    print(max(sum))