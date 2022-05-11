/*Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.

Note: a and b are not ordered!
Examples (a, b) --> output (explanation)

(1, 0) --> 1 (1 + 0 = 1)
(1, 2) --> 3 (1 + 2 = 3)
(0, 1) --> 1 (0 + 1 = 1)
(1, 1) --> 1 (1 since both are same)
(-1, 0) --> -1 (-1 + 0 = -1)
(-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)


*/
#include <stdlib.h>
#include <stdio.h>

int get_sum(int a , int b) {
    // Good luck
  int sum = a;
 if (b>a)
    for(int i=a+1;i<b+1;i++) sum+=i;
  else if (b<a)
    for(int i=a-1;i>b-1;i--) sum+=i;
  return sum;
}

int main (){


int sum = get_sum(-14,-1);

printf("%d\n",sum);


return 0;
}
