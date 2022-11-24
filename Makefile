OBJS = vectors.o

main: main.o ${OBJS}
	g++ -o main main.o ${OBJS}

tests: tests.o ${OBJS}
	g++ -o tests tests.o ${OBJS}

vectors.o: vectors.cpp vectors.h

main.o: main.cpp

tests.o: tests.cpp

clean:
	rm -f *.o
