BUILDDIR = ./build
INCDIR = ./include
SRCDIR = ./src

SRCS = $(shell find . -name '*.cpp')

CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++17 -I$(INCDIR) -I$(INCDIR)/Builder -I$(INCDIR)/Singleton -I$(INCDIR)/AbstractFactory -I$(INCDIR)/Products -I$(INCDIR)/Parts

CXX = g++

example: $(SRCS)
	$(shell mkdir -p $(BUILDDIR))
	$(CXX) $^ $(CXXFLAGS) -o $(BUILDDIR)/$@

.PHONY: clean
clean:
	$(RM) $(BUILDDIR)/example
