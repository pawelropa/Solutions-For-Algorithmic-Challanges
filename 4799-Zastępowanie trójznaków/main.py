import sys
data = sys.stdin.readlines()
stri = ""
for line in data:
	stri += line

line = stri;
line = line.replace('??=', '#')
line = line.replace('??\\', "\\")
line = line.replace("??'", "^")
line = line.replace("??(", "[")
line = line.replace("??)", "]")
line = line.replace("??!", "|")
line = line.replace("??<", "{")
line = line.replace("??>", "}")
line = line.replace("??-", "~")
sys.stdout.write(line)
