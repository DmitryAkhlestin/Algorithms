/*Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *repeat_str(size_t count, const char *src) {
  
  size_t len = strlen(src);
  char *s = (char *) calloc(count*len+1,sizeof(char));
  for(size_t i = 0; i < count;i++){
    strncat(s,src,len);
  }
  return s;
}


int main (){


char *a = "hello ";

char  *str = repeat_str(3,a);

printf("%s <--hello hello hello %d\n",str,strcmp(str, "hello hello hello "));
free(str);

return 0;
}
