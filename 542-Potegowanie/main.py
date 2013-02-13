t = int(raw_input())
for i in range(t):
	try:
		x, n, p = map(int, raw_input().split())
		print x**n % p
	except:
		break