BUILDDIR = ./build
INCDIR = ./include
SRCDIR = ./src

SRCS = $(shell find . -name '*.cpp')

CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++17 -I$(INCDIR)

CXX = g++

example: $(SRCS)
	$(shell mkdir -p $(BUILDDIR))
	$(CXX) $^ $(CXXFLAGS) -o $(BUILDDIR)/$@

.PHONY: clean
clean:
	$(RM) $(BUILDDIR)/example
