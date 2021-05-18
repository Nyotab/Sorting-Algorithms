CC = g++
CFLAGS = -Wall -Wextra
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
EXEC = main

all: $(EXEC)

main: sorting.o 
	$(CC) $(CFLAGS) sorting.o main.cpp $(LDFLAGS)

sorting.o: sorting.cpp sorting.h

main.o: main.cpp sorting.h 

clean:
	${RM} *.o
	${RM} *.d
	${RM} main
	${RM} *.cpp~
	${RM} *.h~


# END
