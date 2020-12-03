CXXFLAGS= -Wall -I./lib

all:
	@echo "Available Targets"
	@echo " - build: build the source code"
	@echo " - build-test: build the testing source code"
	@echo " - clean: remove all files created earlier"

build: main

main: main.o
	g++ -o count main.o

build-test: main-test
	
main-test: test_main.o catch_amalgamated.o
	g++ -o main-test test_main.o catch_amalgamated.o

clean:
	-rm -f *.o
	-rm -f main
	-rm -f main-test
	-rm -f *.exe
	-rm -f *.out