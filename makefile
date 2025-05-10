# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable name
TARGET = open_library

# Source files
SRC = main.cpp books.cpp bookscollection.cpp users.cpp userscollection.cpp

#Object files
OBJ = $(SRC:.cpp=.o)

# Build target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Compile each .cpp file into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(TARGET) *.o