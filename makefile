CC=gcc
AR=ar
FLAGS= -Wall -g
OBJECTS_REC= advancedClassifictionRecursive.o basicClassification.o
OBJECTS_LOOPS=advancedClassifictionloop.o basicClassification.o
loops:libclassloops.a
loopd:libclassloops.so
recursives:libclassrec.a
recursived:libclassrec.so
all: libclassloops.a libclassloops.so libclassrec.a libclassrec.so mains maindrec maindloop

libclassloops.a: $(OBJECTS_LOOPS)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOPS)

libclassloops.so:$(OBJECTS_LOOPS)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOPS)
libclassrec.a:$(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC)

libclassrec.so: $(OBJECTS_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_REC) 

mains: main.o libclassrec.a 
	$(CC) $(FLAGS)  -o mains main.o libclassrec.a -lm

maindloop:main.o libclassloops.so 
	$(CC) $(FLAGS)  -o maindloop main.o ./libclassloops.so -lm

maindrec:main.o libclassrec.so
	$(CC) $(FLAGS)  -o maindrec main.o ./libclassrec.so -lm

main.o: main.c Numclass.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so  maindloop maindrec mains 
