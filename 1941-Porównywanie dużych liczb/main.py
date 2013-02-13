import sys

data = sys.stdin.readlines()

for line in data:
	words = map(str, line.split())
	first = int(words[0])
	second = int(words[2])
	if words[1] == "==":
		if first == second:
			print "%d" % 1
		else:
			print "%d" % 0
	if words[1] == "!=":
		if first != second:
			print "1"
		else:
			print "0" 
	if words[1] == ">=":
		if first >= second:
			print "1"
		else:
			print "0"
	if words[1] == "<=":
		if first <= second:
			print "1"
		else:
			print "0" 
			
	