#include <stdio.h>

int main() {

  int rows, columns, input;
   char letter;

  printf("Enter a number of choice \n");
  scanf("%d", &input);


  if (input % 2 == 0) {

    printf("Even numbers not allowed \n");
    printf("Enter number of choice \n");
    scanf("%d", &input);

  } else {
    printf("Enter a letter of choice \n");
    scanf(" %c", &letter);

    for (rows = 1; rows <= input - 1; rows++) {

      for (columns = 1; columns <= (2 * input) - 1; columns++) {

        if (columns >= input - (rows - 1) && columns <= input + (rows - 1)) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }

    for (rows = (input - 1) - 1; rows >= 1; rows--) {

      for (columns = 1; columns <= (2 * input) - 1; columns++) {

        if (columns >= input - (rows - 1) && columns <= input + (rows - 1)) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }

  return 0;
}