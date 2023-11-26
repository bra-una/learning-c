#include <stdio.h>

int main() {

  int i, j, n;
  char letter;

  printf("Enter number of choice \n");
  scanf("%d", &n);

  if (n % 2 == 0) {

    printf("Even numbers not allowed \n");
	printf("Enter number of choice \n");
	scanf("%d", &n);

  } else {
    printf("Enter a letter of choice \n");
    scanf(" %c", &letter);
	
	for (i = 1; i <= n - 1; i++) {

    for (j = i; j < n; j++) {
      printf(" ");
    }

    for (j = 1; j < i; j++) {

      if (j == 1) {
        printf("%c", letter);
      } else {
        printf(" ");
      }
    }

    for (j = 1; j <= i; j++) {

      if (j == i) {
        printf("%c", letter);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  for (i = 1; i <= n; i++) {

    for (j = 1; j < i; j++) {
      printf(" ");
    }

    for (j = i; j < n; j++) {

      if (j == i) {
        printf("%c", letter);
      } else {
        printf(" ");
      }
    }

    for (j = i; j <= n; j++) {

      if (j == n) {
        printf("%c", letter);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  }

  


return 0;
}