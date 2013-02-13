import sys
from collections import defaultdict    
global dic1
global dic2


def letterOccurrances(string):	
	for character in string:
		if character != "\0" and character != ' ' and character != '\t' and character != '\n':
			if character.islower():
				dic1[character] += 1
			else:
				dic2[character] += 1


t=input() 
dic1 = defaultdict(lambda: 0)
dic2 = defaultdict(lambda: 0)
for i in range(t):
	dic = letterOccurrances(sys.stdin.readline())

for k,v in sorted(dic1.items()):
    print k, v
for k,v in sorted(dic2.items()):
    print k, v

	