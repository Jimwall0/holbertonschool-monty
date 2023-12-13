#include "monty.h"
/**
 * main - Program
 * @argc: number of arguements
 * @argv: array holding the arguements
 * Return: a number
 */
int main(int argc, char **argv)
{
  FILE *document;
  char *line = NULL;
  size_t size_max = 32, characters;
  if (argc != 2)
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  
  document = fopen(argv[1], "r");
  if (document == NULL)
    {
      printf("Error: Can't open %s\n", argv[1]);
      exit(EXIT_FAILURE);
    }
  
  characters = getline(&line, &size_max, document);
  if (!characters)
    {
      printf("something wrong with the text\n");
      exit(EXIT_FAILURE);
    }
  
  printf("%s\n", line);
  return (0);
}

char *token(char *string)
{
  
