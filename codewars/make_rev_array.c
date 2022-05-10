/* Note: allocate memory yourself */
/* return NULL in case num == 0 */
#include <stdio.h>
#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
  if (num==0) return NULL;
  unsigned short *arr = (unsigned short *) calloc (num,sizeof(unsigned short));
  for (int i = num; i > 0; i--) arr[num - i] = i;
    return arr;
}

int main (){


unsigned short num = 5;
unsigned short *arr;
arr = reverse_seq(num);

for (int i = 0; i < num; i++) printf("%d %d\n",i,arr[i]);

free(arr);
return 0;
}
