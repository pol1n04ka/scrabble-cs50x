#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

int CountScore(char word[]);

#define MAX_WORD_LENGTH 49

// Scores for each letter
const int lettersScores[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                             1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void) {
  // define players and words
  char playerFirst[] = "Player 1, ";
  char playerSecond[] = "Player 2, ";

  char firstWord[MAX_WORD_LENGTH + 1], secondWord[MAX_WORD_LENGTH + 1];

  // ask each player for word input
  int checkOne, checkTwo;

  printf("%senter your word (maximum length is %i): ", playerFirst,
         MAX_WORD_LENGTH);
  checkOne = scanf("%s", firstWord);
  printf("\n");

  printf("%senter your word (maximum length is %i): ", playerSecond,
         MAX_WORD_LENGTH);
  checkTwo = scanf("%s", secondWord);
  printf("\n");

  // verify input

  // count score for each word
  int playerFirstScore = CountScore(firstWord);
  int playerSecondScore = CountScore(secondWord);

  printf("First word score is: %i, second word score is: %i\n",
         playerFirstScore, playerSecondScore);

  // print who wins
  printf("\n");

  if (playerFirstScore > playerSecondScore) {
    printf("Player 1 wins!\n");
  } else if (playerFirstScore < playerSecondScore) {
    printf("Player 2 wins!\n");
  } else if (playerFirstScore == 0 || playerSecondScore == 0) {
    printf("Wrong input, try again!\n");
    return 1;
  } else {
    printf("It's a tie!\n");
  }

  return 0;
}

// For counting scrabble score for word
int CountScore(char word[]) {
  char *ptr = word;
  int score = 0;

  while (*ptr != '\0' && isalpha((int)*ptr)) {
    char letter = toupper(*ptr);

    score += lettersScores[letter - 'A'];

    ptr++;
  }

  return score;
}
