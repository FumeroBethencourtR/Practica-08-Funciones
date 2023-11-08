X = g++
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

ordenar-func: ordenar-main.o ordenar-func.o
	$(CXX) $(CXXFLAGS) -o ordenar ordenar-main.o ordenar-func.o $(LDLIBS)
clean:
	rm *.o ordenar

.PHONY = clean all

