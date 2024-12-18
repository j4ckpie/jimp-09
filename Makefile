all:
	gcc -Wall --pedantic src/*.c -o bin/gauss

test: all
	bin/gauss dane/A dane/b dane/C dane/d dane/E dane/f dane/G dane/h
