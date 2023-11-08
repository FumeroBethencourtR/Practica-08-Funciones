X = g++
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

volumen-de-un-circulo-func: volumen-de-un-circulo-main.o volumen-de-un-circulo-func.o
	$(CXX) $(CXXFLAGS) -o volumen-de-un-circulo volumen-de-un-circulo-main.o volumen-de-un-circulo-func.o $(LDLIBS)
clean:
	rm *.o volumen-de-un-circulo

.PHONY = clean all

