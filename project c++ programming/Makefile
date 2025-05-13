CXX = g++
CXXFLAGS = -Wall -g -I/opt/homebrew/opt/openssl@3/include
LIBS = -L/opt/homebrew/opt/openssl@3/lib -lssl -lcrypto

all: main

main: main.o
	$(CXX) $(CXXFLAGS) -o main main.o $(LIBS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o main