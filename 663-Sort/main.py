from math import sqrt
from operator import itemgetter
import sys
t = input()
przypadki = input()
for i in range(t):
	
	punkty = dict()
	for przypadki in range(przypadki):
		nazwa, x_s, y_s = map(str, raw_input().split())
		x = int(x_s)
		y = int(y_s)
		punkty[nazwa] = [sqrt(x*x + y*y), [x, y]]

	wynik = sorted(punkty.items(), key=itemgetter(1))
	#print wynik
	for k in wynik:
		print k[0], k[1][1][0], k[1][1][1]
	print
	#print i, t
	if i == t-1:
		pass
	else:
		przypadki = sys.stdin.readline()
		przypadki = sys.stdin.readline()
		przypadki = int(przypadki)
	#print przypadki