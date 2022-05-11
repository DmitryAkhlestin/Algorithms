/*Don't give me five!

In this kata you get the start number and the end number of a region and should return the count of all numbers except numbers with a 5 in it. The start and the end number are both inclusive!

Examples:

1,9 -> 1,2,3,4,6,7,8,9 -> Result 8
4,17 -> 4,6,7,8,9,10,11,12,13,14,16,17 -> Result 12

The result may contain fives. ;-)
The start number will always be smaller than the end number. Both numbers can be also negative!

I'm very curious for your solutions and the way you solve it. Maybe someone of you will find an easy pure mathematics solution.

Have fun coding it and please don't forget to vote and rank this kata! :-)

I have also created other katas. Take a look if you enjoyed this kata!

*/
#include <stdlib.h>
//#include <math.h>
#include <stdio.h>

int dontGiveMeFive(int start, int end)
{
  int sum = end - start + 1;
  if(start==end){
    if (start == 5) return 0;
    else return 1;
  } else {
    for(int i = start;i<=end;i++){
      printf("%d\n",i);
      if (abs(i)%10 == 5){
      printf("%d 5\n",i);
        sum--;
        continue;
      }
      if (abs(i)%100>49 && abs(i)%100 <60){
        sum--;
        continue;
      }
      if (abs(i)%1000>499 && abs(i)%1000 <600){
        sum--;
        continue;
      }
      if (abs(i)%10000>4999 && abs(i)%10000 < 6000){
        sum--;
        continue;
      }
      if (abs(i)%100000>49999 && abs(i)%100000 <60000){
        sum--;
        continue;
      }      
      if (abs(i)%1000000>499999 && abs(i)%1000000 <600000){
        sum--;
        continue;
      }      
      if (abs(i)%10000000>4999999 && abs(i)%10000000 <6000000){
        sum--;
        continue;
      } 
      if (abs(i)%100000000>49999999 && abs(i)%100000000 <60000000){
        sum--;
        continue;
      }        
            if (abs(i)%1000000000>499999999 && abs(i)%1000000000 <600000000){
        sum--;
        continue;
      }        
    }
  }
  return sum;
}
/*2,147,483,647*/


int main (){


int sum = dontGiveMeFive(-14,-1);

printf("%d\n",sum);


return 0;
}
