CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEPS = rush.h
OBJ = create_dictionary.o ft_files.o ft_string.o main.o solve.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
rush-02: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
fclean:
	rm -f *.o
