CC=g++
CPPFLAGS=-Wall -Wextra -pedantic -std=$(VERSION) -g $(LDFLAGS)
PROG=main
OBJS=$(PROG).cpp calculator.cpp
LDFLAGS=-fsanitize=address,undefined
VERSION=c++17

all: $(PROG)

$(PROG): $(OBJS)

.PHONY: clean

clean:
	@find . \( -name "*.dSYM" -o -name "*.tar.gz" \) -exec rm -r {} +
	rm -f *.out $(PROG)