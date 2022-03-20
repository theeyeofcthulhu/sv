CC = gcc

SRC = $(wildcard examples/*.c)
INC = sv.h
EXE = $(SRC:.c=)
OBJ = $(SRC:.c=.o)
DOXYFILE = Doxyfile

CFLAGS = -Wall -Wextra -std=c11 -pedantic -ggdb

.PHONY: all
all: $(EXE)

.PHONY: run
run: $(EXE)
	$(foreach exe,$(EXE),./$(exe);)

.PHONY: clean
clean:
	rm $(OBJ)
	rm $(EXE)

$(OBJ): %.o: %.c $(INC)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXE): %: %.o
	$(CC) -o $@ $<

.PHONY: doc
doc: $(INC) $(DOXYFILE)
	doxygen $(DOXYFILE)
