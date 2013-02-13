import rect

(x, y), (x2, y2) =map(int,raw_input().split())
r1 = (x, y), (x2, y2)
(x, y), (x2, y2) =map(int,raw_input().split())
r2 = (x, y), (x2, y2)

r3 = rect.intersect([r1, r2])
if r3 is rect.empty:
	print "Empty"
else:
	print r3