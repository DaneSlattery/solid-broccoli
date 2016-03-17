# Makefile for SnakeAI_c++

CC=g++
CFLAGS=-g -Wall
SOURCES=$(shell find $(SRCDIR) -type f -name *.cpp)  #all .cpp files in ./src
OBJECTS=$(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.cpp=.o)) #all .o files in ./build
BUILDDIR=build
SRCDIR=src
INC=-I include
EXEC=bin/snake

all: $(EXEC)

#should take in all object files
$(EXEC): $(OBJECTS)
	@echo " Linking..."
	@mkdir -p bin
	$(CC) $^ -o $@
	
#should take in all cpp files    
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
    
clean: 
	@echo " Cleaning..."
	rm -r $(BUILDDIR) $(EXEC)
    
