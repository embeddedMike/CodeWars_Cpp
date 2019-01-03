.PHONY: clean all

all: build/main build/main-ut

#exec
build/main: build/main.o build/CountDig.o
	g++ -std=c++14 build/main.o	build/CountDig.o 			 			   \
	-o build/main

build/main-ut: build/test_main.o build/EvenNumbersTest.o build/EvenNumbers.o
	g++ -std=c++14 /usr/lib/libgtest.so /usr/lib/libgtest_main.so -pthread \
	build/test_main.o 													   \
	build/countDigTest.o 												   \
	build/CountDig.o 													   \
	build/EvenNumbersTest.o 													   \
	build/EvenNumbers.o 													   \
	-o build/main-ut											

#src
build/main.o: src/main.cpp
	g++ -c src/main.cpp -o build/main.o

build/HighestLowest.o: src/HighestLowest.cpp
	g++ -c src/HighestLowest.cpp -o build/HighestLowest.o

build/Printer.o: src/Printer.cpp
	g++ -c src/Printer.cpp -o build/Printer.o

build/CountDig.o: src/CountDig.cpp
	g++ -c src/CountDig.cpp -o build/CountDig.o

build/VowelCount.o: src/VowelCount.cpp
	g++ -c src/VowelCount.cpp -o build/VowelCount.o

build/EvenNumbers.o: src/EvenNumbers.cpp
	g++ -c src/EvenNumbers.cpp -o build/EvenNumbers.o

#gtest
build/test_main.o: tests/test_main.cpp
	g++ -c tests/test_main.cpp -o build/test_main.o 

build/PrinterTest.o: tests/PrinterTest.cpp
	g++ -c tests/PrinterTest.cpp -o build/PrinterTest.o 

build/HighestLowestTest.o: tests/HighestLowestTest.cpp
	g++ -c tests/HighestLowestTest.cpp -o build/HighestLowestTest.o 

build/countDigTest.o: tests/countDigTest.cpp
	g++ -c tests/countDigTest.cpp -o build/countDigTest.o 

build/VowelCountTest.o: tests/VowelCountTest.cpp
	g++ -c tests/VowelCountTest.cpp -o build/VowelCountTest.o 

build/EvenNumbersTest.o: tests/EvenNumbersTest.cpp
	g++ -c tests/EvenNumbersTest.cpp -o build/EvenNumbersTest.o 
#clean
clean:
	rm -f build/*.o build/main build/main-ut			
