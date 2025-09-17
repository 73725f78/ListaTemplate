main: main.cpp node.cpp node.hpp lista.hpp
	g++ -o main main.cpp node.cpp

run: main
	./main

clear:
	rm main
