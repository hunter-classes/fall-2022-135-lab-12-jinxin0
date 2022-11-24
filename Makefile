OBJS = vectors.o optimism.o fusion.o

main: main.o ${OBJS}
	g++ -o main main.o ${OBJS}

tests: tests.o ${OBJS}
	g++ -o tests tests.o ${OBJS}

fusion.o: fusion.cpp fusion.h

optimism.o: optimism.cpp optimism.h

vectors.o: vectors.cpp vectors.h

main.o: main.cpp

tests.o: tests.cpp

clean:
	rm -f *.o
