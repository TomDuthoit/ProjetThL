all: clear build clean run

clear:
	rm mathlobster

build:
	flex -o mathlobster.cpp mathlobster.l
	bison -d mathlobster.y
	g++ mathlobster.cpp mathlobster.tab.c -o mathlobster_program -lm

clean:
	rm mathlobster.cpp
	rm mathlobster.tab.c
	rm mathlobster.tab.h
	clear

run:
	./mathlobster_program
