CC = gcc
CFLAGS = -O2
DEPS = func_math.h 

OBJ = main_p.o func_math.o

all: $(OBJ)
	$(CC) $(CFLAGS) -lm $(OBJ) 

debug: 
	$(MAKE) CFLAGS="-g"

func_math.o: func_math.c $(DEPS)
	$(CC) -c $(CFLAGS) func_math.c

main_p.o: main_p.c $(DEPS) 
	$(CC) -c $(CFLAGS) main_p.c

clean:
	rm -rf $(OBJ)




