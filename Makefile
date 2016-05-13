# Makefile for SnakeAI_c++

CC=g++
CFLAGS=-g -Wall
SOURCES=$(shell find $(SRCDIR) -type f -name *.cpp)  #all .cpp files in ./src
OBJECTS=$(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.cpp=.o)) #all .o files in ./build
BUILDDIR=build
SRCDIR=src
BINDIR=bin
INC=-lncurses
EXEC=$(BINDIR)/snake

all: $(EXEC)

#should take in all object files
$(EXEC): $(OBJECTS)
	@echo " Linking..."
	@mkdir -p $(BINDIR)
	$(CC) $^ $(INC) -o  $@
	
#should take in all cpp files    
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@echo " Building..."
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
    
clean: 
	@echo " Cleaning..."
	rm -r $(BUILDDIR) $(EXEC) $(BINDIR) || true
    
