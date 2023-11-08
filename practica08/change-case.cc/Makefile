X = g++
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

funtion-example: change-case.o change-case-func.o
	$(CXX) $(CXXFLAGS) -o change-case change-case.o change-case-func.o $(LDLIBS)
clean:
	rm *.o change-case

.PHONY = clean all

