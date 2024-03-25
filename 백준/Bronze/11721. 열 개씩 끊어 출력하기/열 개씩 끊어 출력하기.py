a=input()
answer=''
for i in range((len(a)//10)+1):
    answer+=a[10*i:(10*i)+10]+'\n'
print(answer)