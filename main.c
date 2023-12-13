#include "monty.h"
/**
 * main - Program
 * @argc: number of arguements
 * @argv: array holding the arguements
 * Return: a number
 */
int main(int argc, char **argv)
{
  if (argc != 2)
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  printf("%s %s\n", argv[0], argv[1]);
  return (0);
}
