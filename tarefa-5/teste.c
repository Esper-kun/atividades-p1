#include <stdlib.h>
#include <stdio.h>

/* int isPrimeNumber (unsigned long long int number, unsigned long long int counter) */
/* { */
/*   if (number == 0 || number == 1){ */
/*     return 0; */
/*   } */
/*   else if (number % counter == 0 && counter != 1) { */
/*     return 0; */
/*   } */
/*   else if (counter == (number / 2)){ */
/*     return 1; */
/*   } */
/*   return isPrimeNumber(number, counter + 1); */
/* } */

int main(int argc, char *argv[])
{
  int i, j;
  i = 10;
  for (int j = 0; j < 10; i++) {
    printf("hellok");
  }

  return EXIT_SUCCESS;
}
