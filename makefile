CC=gcc
CFLAGS=-O2
DEPS=head_ad.h

OBJ=main_ad.o math_func.o

all:${OBJ}
	${CC} ${CFLAGS} -lm ${OBJ}

debug:
	${MAKE} CFLAGS="-g"

main_ad.o: main_ad.c ${DEPS}
	${CC} -c ${CFLAGS} main_ad.c

math_func.o: math_func.c ${DEPS}
	${CC} -c ${CFLAGS} math_func.c

clean:
	rm -f ${OBJ}
