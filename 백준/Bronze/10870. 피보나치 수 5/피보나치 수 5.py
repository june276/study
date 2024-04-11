n = int(input())

memo = [0 for i in range(n+1)]

if n>0:
	memo[1] = 1


def fivoMemo(n):
	if n!=0:
		n1 = 0
		n2 = 0
		if memo[n-1] != 0:
			n1 = memo[n-1]
		else:
			n1 = fivoMemo(n-1)
		if memo[n-2] != 0:
			n2 = memo[n-2]
		else:
			n2 = fivoMemo(n-2)
		return n1 + n2
	else:
		return 0

print(fivoMemo(n))