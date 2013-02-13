#zaimportowanie odpowiedniego modulu
import sys

#wczytanie wszystkich danych z wejscia
data = sys.stdin.readlines()

#dla kazdej lini wejscia wykonujemy ponizsza petle
for line in data:
	#sprawdzamy czy wejscie rozpoczyna sie od spacji
	#jezeli tak bedziemy zamieniac pierwsza litere
	#w pierwszym slowie na duza
	if line[0] == " ":
		capitalizeFirst = True
	else:
		capitalizeFirst = False
	#dzielimi linie na wyrazy oddzielone spacja
	words = map(str, line.split())
	
	#liczymy ile emelentow ma linia
	howMany = 0
	for word in words:
		howMany += 1
	#jezeli linia ma nie ma zadnych elementow
	#traktujemy ja jako pusta i taka tez wyswietlamy
	if howMany == 0:
		emptyLine = True
	else :
		emptyLine = False
	#ostateczna wersja zmodyfikowanego tekstu laduje w 
	#stringu returnString
	returnString = ""
	
	returnList = []
	for word in words:
		#zamieniamy pierwsze litery kazdego slowa na duze
		returnList.append(word.capitalize())
	if not capitalizeFirst and not emptyLine:
		returnList[0] = words[0]
	for word in returnList:
		returnString += word
	print returnString
	
	
		
		
