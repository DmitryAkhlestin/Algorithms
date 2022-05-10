/*Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char toUpper(char c){

  if (c >=97) return c-'a'+'A';
  else return c;
    
}
char *get_initials (const char *full_name, char initials[4])
{
  int i = 0;
  if (strcmp(full_name,"")!= 0) {
    
    for(i=0;i<(int)strlen(full_name);i++) {if(full_name[i]==' ') break;}
    sprintf(initials,"%c.%c",toUpper(full_name[0]),toUpper(full_name[i+1]));
    
  }
  else
    initials[0] = '\0'; // write to initials
  return initials; // return it
  
}

int main (){


char *s = "Aamuel Backson";
char initials[4];

get_initials(s,initials);

printf("%s\n",initials);

return 0;
}
