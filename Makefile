run: days
	./days

days: days.c
	gcc -Wall -std=c11 days.c -o days

build: days
