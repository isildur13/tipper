tip: src/tip.c src/functions.c headers/relative.h
	gcc -c src/tip.c -o obj/tip.o
	gcc -c src/userinputs.c -o obj/userinputs.o

functions: src/functions.c headers/relative.h
	gcc -c src/functions.c -o obj/functions.o

create: tip functions
	gcc -o bin/tipper obj/tip.o obj/functions.o obj/userinputs.o

clear:
	rm obj/*.o bin/tipper
