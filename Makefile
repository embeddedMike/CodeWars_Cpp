all: build/main

build/main: build/main.o
	g++ build/main.o -o build/main

build/main.o: src/main.cpp
	g++ -c src/main.cpp -o build/main.o
