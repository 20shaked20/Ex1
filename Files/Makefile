CC=gcc
OBJECTS_Program= basicClassification.o advancedClassificationLoop.o #advancedClassificationRecursion.o
OBJECTS_LIB= basicClassification.o advancedClassificationLoop.o
FLAGS= -Wall -g

all: basicClassification.o advancedClassificationLoop.o libNumClass.a progmain
progmain: $(OBJECTS_Program) NumClass.a
	$(CC) $(FLAGS) -o progmain $(OBJECTS_Program) NumClass.a

libNumClass.a: $(OBJECTS_LIB)
	$(AR) -rcs NumClass.a $(OBJECTS_LIB)

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

#advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
#	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmain