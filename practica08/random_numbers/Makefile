X = g++
CXXFLAGS = -std=c++17 -Wall
LDLIBS = -lstdc++

funtion-example: random_numbers_main.o random_numbers_func.o
	$(CXX) $(CXXFLAGS) -o random_numbers random_numbers_main.o random_numbers_func.o $(LDLIBS)
clean:
	rm *.o random_numbers

.PHONY = clean all

