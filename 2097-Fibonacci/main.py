
fib = [1, 1]
for i in range(100):
	fib.append(fib[i+1] + fib[i])

t=input()

for i in range(t):
	x,y=map(int,raw_input().split())
	while x > len(fib):
		for i in range(100):
			fib.append(fib[-1] + fib[-2])
	print fib[x-1] % y 
	