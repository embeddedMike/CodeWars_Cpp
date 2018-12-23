all: build/main build/main-ut

build/main: build/main.o build/HighestLowest.o build/Printer.o build/CountDig.o
	g++ build/main.o  -o build/main

build/main-ut: build/test_main.o 
	g++ /usr/lib/libgtest.so /usr/lib/libgtest_main.so -pthread build/test_main.o -o build/main-ut

build/main.o: src/main.cpp
	g++ -c src/main.cpp -o build/main.o

build/HighestLowest.o: src/HighestLowest.cpp
	g++ -c src/HighestLowest.cpp -o build/HighestLowest.o

build/Printer.o: src/Printer.cpp
	g++ -c src/Printer.cpp -o build/Printer.o

build/CountDig.o: src/CountDig.cpp
	g++ -c src/CountDig.cpp -o build/CountDig.o

build/test_main.o: tests/test_main.cpp
	g++ -c tests/test_main.cpp -o build/test_main.o 
