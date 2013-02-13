import sys

data = sys.stdin.readlines()

for line in data:
	words = map(str, line.split())
	slow, liczb = (0, 0)
	
	howMany = 0
	for word in words:
		howMany += 1
	if	howMany == 0:
		continue
	
	for word in words:
		if word.isdigit():
			liczb += 1
		else:
			slow += 1
	print liczb, slow