#include <stdlib.h>
#include <stdio.h>

int sequencia(int num, int counter)
{
  if(num == 1){
    return counter;
  } else if (num%2 == 0){
    num = num/2;
  } else {
    num = (num * 3) + 1;
  }

  return sequencia(num, counter + 1);
}

int maior(int num1, int num2)
{
  return (num1 > num2) ? num1 : num2;
}

int loop_intervalo(int num1, int num2, int counter)
{
  if (num1 == num2) {
    counter = maior(sequencia(num2, 1), counter);
    return counter;
  }

  counter = maior(sequencia(num1, 1), counter);

  return loop_intervalo(num1 + 1, num2, counter);
}

int teste()
{
  
}

void loop()
{
  int num1, num2;
  if (scanf("%i %i", &num1, &num1) != EOF){
    loop_intervalo(num1, num2, 1);
  }
  
  loop();
}

int main(int argc, char *argv[])
{
  loop();

  return EXIT_SUCCESS;
}
