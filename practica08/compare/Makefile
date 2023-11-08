X = g++
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

funtion-example: compare-main.o compare-func.o
	$(CXX) $(CXXFLAGS) -o compare compare-main.o compare-func.o $(LDLIBS)
clean:
	rm *.o compare

.PHONY = clean all

