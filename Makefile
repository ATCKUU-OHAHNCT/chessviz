all: bin/chessviz 

bin/chessviz: build/src/main.o build/src/board_print_plain.o build/src/board.o
	g++ -Wall -Werror build/src/main.o build/src/board_print_plain.o build/src/board.o -o bin/chessviz

build/src/main.o: src/main.cpp
	g++ -Wall -Werror -c src/main.cpp -o build/src/main.o

build/src/board_print_plain.o: src/board_print_plain.cpp
	g++ -Wall -Werror -c src/board_print_plain.cpp -o build/src/board_print_plain.o

build/src/board.o: src/board.cpp
	g++ -Wall -Werror -c src/board.cpp -o build/src/board.o

.PHONY: clean

clean:
	rm -rf build/src/*.o

