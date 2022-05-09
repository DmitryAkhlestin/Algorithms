/*Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define nw 3

char *smash (const char *const words[], size_t nb_words)
{
// allocate a string on the heap, memory will be freed
  size_t len_str = 0;
  size_t i;
  char *str;
  for(i = 0; i < nb_words;i++){
    len_str = len_str + strlen(words[i]) + 1;
  }
  if ((len_str != 0) && (nb_words > 0)){
    str = calloc(len_str+1,sizeof(char)); // -1 number of spaces +1 for '\0'
    strncpy(str,words[0],strlen(words[0]));
    i = 1;
    while (i <= nb_words - 1){
      strcat(str, " ");
      strncat(str,words[i],strlen(words[i]));
      i++;
    }
      
  } else {
    str  = calloc(1,sizeof(char));
  }
  str[len_str] = '\0';
  return str;
}


int main (){
/*
{"a", "b", "c", "d"}),"a b c d"
{"hello", "world"}),"hello world"
{"singleword"}),"singleword"
{}, ""*/


const char *a[1] = {};

char  *str = smash(a,0);

printf("%s a\n",str);

free(str);

return 0;
}
