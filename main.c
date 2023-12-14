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
  char *line = NULL, **documentCopy = malloc(sizeof(char *));
  size_t size_max = 32;
  int number = 0;
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
  while (number < 5)
    {
      getline(&line, &size_max, document);
      documentCopy[number] = malloc(sizeof(char) * strlen(line) + 1);
      if (documentCopy[number] == NULL)
	{
	  printf("Failure\n");
	  free(documentCopy[number]);
	  free(documentCopy);
	  exit(1);
	}
      documentCopy[number] = line;
      documentCopy[number] = strtok(line, "\n ");
      printf("%s\n", documentCopy[number]);
      number++;
    }
  return (0);
}

/**
 * readFile - strtok a file
 * @string: What is being turned into the token
 * @delimiter: What to seperate them by
 * Return: pointer to an array with all the tokens.
 */
char *cpline(char *string, char *delimiter)
{
  char *copy = malloc(sizeof(char) * strlen(string) + 1), *temp;
  strcpy(copy, string);
  temp = strtok(copy, delimiter);
  return (temp);
}
