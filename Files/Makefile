CC=gcc
AR=ar
OBJECTS_Program= basicClassification.o advancedClassificationLoop.o #advancedClassificationRecursion.o
OBJECTS_loop= basicClassification.o advancedClassificationLoop.o
OBJECTS_Rec = basicClassification.o #advancedClassificationRecursion.o
FLAGS= -Wall -g

all: basicClassification.o advancedClassificationLoop.o #advancedClassificationRecursion

loops: 

libclassloops.a: OBJECTS_loop

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

