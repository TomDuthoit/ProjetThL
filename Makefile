all: clear build clean run

clear:
	rm mathlobster

build:
	flex -+ -o mathlobster.cpp mathlobster.l
	bison -d mathlobster.yy
	g++ mathlobster.cpp mathlobster.tab.cc -o mathlobster_program -lm

clean:
	rm mathlobster.cpp
	rm mathlobster.tab.cc
	rm mathlobster.tab.hh
	rm stack.hh
	clear

run:
	./mathlobster_program
