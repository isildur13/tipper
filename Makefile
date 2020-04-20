tip: src/tip.cpp src/functions.cpp headers/relative.h
	g++ -c src/tip.cpp -o obj/tip.o

functions: src/functions.cpp headers/relative.h
	g++ -c src/functions.cpp -o obj/functions.o

create: tip functions
	g++ -o bin/tipper obj/tip.o obj/functions.o 

clear:
	rm obj/*.o bin/tipper
