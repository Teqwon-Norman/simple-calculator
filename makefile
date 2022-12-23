calculator: calculator.o main.o
	g++ calculator.o main.o -o calculator

main.o: main.cpp
	g++ -c main.cpp

calculator.o: calculator.cpp
	g++ -c calculator.cpp

clean:
	rm *.o calculator