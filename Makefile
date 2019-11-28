
FLAGS = -Wall -g

CC = gcc

AR = ar



all: myBanks  mains

mains: main.o myBanks 
	$(CC) $(FLAGS) -o mains main.o libmyBank.a	

myBanks: myBank.o
	$(AR) -rcs libmyBank.a myBank.o


myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c 


main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c


.PHONY: clean all
	
clean:
	rm -f *.o *.a mains
