X = g++ 
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

funtion-example: funtion-example.o calculo.o
	$(CXX) $(CXXFLAGS) -o funtion-example funtion-example.o calculo.o $(LDLIBS)
clean:
	rm *.o funtion-example

.PHONY = clean all

