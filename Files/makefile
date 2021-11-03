#VARIABLES:
CC=gcc
AR=ar
OBJECTS_loop= basicClassification.o advancedClassificationLoop.o
OBJECTS_Rec = basicClassification.o advancedClassificationRecursion.o
OBJECTS_Main = main.o
OBJECTS = basicClassification.o advancedClassificationRecursion.o advancedClassificationLoop.o main.o
FLAGS= -Wall -g

#Make commands as a bunch:
all: recursives recursived loopd mains maindloop maindrec 


loops: libclassloops.a #makes static library for loops and normal
recursives: libclassrec.a #makes static library for rec and normal
recursived: libclassrec.so #makes dynamic library for rec and normal
loopd: libclassloops.so #makes dynamic library for loops and normal

mains: $(OBJECTS_Main) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_Main) libclassrec.a 

maindloop: $(OBJECTS_Main) 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_Main) ./libclassloops.so

maindrec: $(OBJECTS_Main) 
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_Main) ./libclassrec.so

#Make commands as singles:

libclassloops.a: $(OBJECTS_loop)  #static library for loops and normal
	$(AR) -rcs libclassloops.a $(OBJECTS_loop)

libclassrec.a: $(OBJECTS_Rec) #static library for rec and normal
	$(AR) -rcs libclassrec.a $(OBJECTS_Rec)

libclassrec.so: $(OBJECTS_Rec) #dynamic library for rec and normal
	$(CC) -shared -o libclassrec.so $(OBJECTS_Rec)

libclassloops.so: $(OBJECTS_loop)  #dynamic library for loops and normal
	$(CC) -shared -o libclassloops.so $(OBJECTS_loop)

basicClassification.o: basicClassification.c NumClass.h 
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

main.o: main.c NumClass.h 
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean: #maybe add more to clean?
	rm -f *.o *.a *.so mains maindloop maindrec
