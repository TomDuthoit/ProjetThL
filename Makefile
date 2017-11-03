all: clear build clean run

clear:
	rm mathlobster

build:
	flex -o mathlobster.c mathlobster.l
	bison -d mathlobster.y
	gcc mathlobster.c mathlobster.tab.c -o mathlobster_program -lm

clean:
	rm mathlobster.c
	rm mathlobster.tab.c
	rm mathlobster.tab.h
	clear

run:
	./mathlobster_program
