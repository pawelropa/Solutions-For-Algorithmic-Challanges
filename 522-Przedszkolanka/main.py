#!/usr/bin/python

def nwd(a, b):
    while b:
        a, b = b, a%b
    return a

liczba_zestawow = input()

while liczba_zestawow:
	wejscie = raw_input()
	wejscie = wejscie.split( )
	
	a = int(wejscie[0])
	b = int(wejscie[1])
	print (a*b)/nwd(a,b)
	liczba_zestawow -= 1