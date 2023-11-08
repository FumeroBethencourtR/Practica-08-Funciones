X = g++
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

area-de-un-triangulo: area-de-un-triangulo-main.o area-de-un-triangulo-func.o
	$(CXX) $(CXXFLAGS) -o area-de-un-triangulo area-de-un-triangulo-main.o area-de-un-triangulo-func.o $(LDLIBS)
clean:
	rm *.o area-de-un-triangulo

.PHONY = clean all

