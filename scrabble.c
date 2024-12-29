#include <stddef.h>
#include <stdio.h>

int CountScore(char word[]);

int main(void) {

  // define letters and their value
  char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  int lettersScores[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                         1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  size_t sizeLetters = sizeof(letters) / sizeof(letters[0]);
  size_t sizeLettersScores = sizeof(lettersScores) / sizeof(lettersScores[0]);

  // define players and words
  char playerFirst[] = "Player 1: ";
  char playerSecond[] = "Player 2: ";

  int playerFirstScore, playerSecondScore;

  char firstWord[50], secondWord[50];

  // ask each player for word input
  int checkOne, checkTwo;

  printf("%s", playerFirst);
  checkOne = scanf("%s", firstWord);
  printf("\n");

  printf("%s", playerSecond);
  checkTwo = scanf("%s", secondWord);
  printf("\n");
  
  printf("%s %s", firstWord, secondWord);

  // verify input
  
  // count score for each word

  // print who wins
  printf("Someone wins\n");

  return 0;
}

int CountScore(char word[]) 
{
  return 0;
}
