X = g++
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

triangle-area: triangle-area-main.o triangle-area-func.o
	$(CXX) $(CXXFLAGS) -o triangle-area triangle-area-main.o triangle-area-func.o $(LDLIBS)
clean:
	rm *.o triangle-area

.PHONY = clean all

