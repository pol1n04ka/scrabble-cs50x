scrabble: scrabble.c 
	gcc -Wall -Wextra -std=c11 -o scrabble scrabble.c 

clean:
	rm -f scrabble
