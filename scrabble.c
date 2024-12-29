#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

int CountScore(char word[]);

// define letters and their value
const char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                        'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                        'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const int lettersScores[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                             1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
const size_t sizeLetters = sizeof(letters) / sizeof(letters[0]);
const size_t sizeLettersScores =
    sizeof(lettersScores) / sizeof(lettersScores[0]);

int main(void) {

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
  playerFirstScore = CountScore(firstWord);
  playerSecondScore = CountScore(secondWord);

  printf("First word score is: %i, second word score is: %i\n",
         playerFirstScore, playerSecondScore);

  // print who wins
  /*printf("Someone wins\n");*/

  if (playerFirstScore > playerSecondScore)
  {
    printf("Player 1 wins!\n");
  }
  else if (playerFirstScore < playerSecondScore)
  {
    printf("Player 2 wins!\n");
  } 
  else 
  {
    printf("Tie!\n");
  }

  return 0;
}

// For counting scrabble score for word
int CountScore(char word[]) {
  char *ptr = word;
  int score = 0;

  while (*ptr != '\0') {
    char letter = toupper(*ptr);

    for (int i = 0; i < (int)sizeLetters; i++) {
      if (letter == letters[i]) {
        score += lettersScores[i];
        /*printf("Letter: %c, score: %i \n", letter, lettersScores[i]);*/
      }
    }

    ptr++;
  }

  /*printf("Score is: %i\n", score);*/

  return score;
}
