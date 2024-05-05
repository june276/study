n, k = map(int, input().split())
arr=[]
for i in range(1, int(n**0.5)+1):
	if n%i == 0:
		arr.append(i)
		if i != n//i:
			arr.append(n//i)
if k > len(arr):
	print(0)
else:
	arr.sort()
	print(arr[k-1])