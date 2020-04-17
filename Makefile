tip: tip.c functions.c relative.h
	gcc -c tip.c 

functions: functions.c relative.h
	gcc -c functions.c

create: tip functions
	gcc -o tipper tip.o functions.o

clear:
	rm *.o tipper
