/* Maintains a parts database (array version) */

#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    /*intentionally null*/;
  while (ch != '\n' && ch != EOF)
  {
    if (i < n)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';

  while(getchar() != '\n')
  ;
  return i;
}
