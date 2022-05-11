/*Simple, remove the spaces from the string, then return the resultant string.

For C, you must return a new dynamically allocated string.
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char *no_space(const char *str_in) {

  char *str_out = (char *) malloc(strlen(str_in));
  int num_space = 0;
  /*if(strcmp(str_in,"") == 0) { result = (char *) realloc(result, 1); result[0]='\0';}
  else {*/
      do {
          if (*str_in != ' ') {*str_out++ = *str_in;} else {num_space++;}
      } while(*str_in++);
  //}

    //  <----  hajime!
    return str_out;

}
/*
  do
  {
    if (*str_in != '!') *str_out++ = *str_in;
  }
  while (*str_in++);*/


int main (){
/*
{"a", "b", "c", "d"}),"a b c d"
{"hello", "world"}),"hello world"
{"singleword"}),"singleword"
{}, ""*/

char *str_in = "HELLO WORLD";

char  *str_out = no_space(str_in);

printf("%s a\n",str_out);

free(str_out);

return 0;
}
