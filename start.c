#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>


#define array_size 100
int main(){
    uint32_t array1[array_size];
    srand(time(NULL));

    for (uint32_t i = 0; i< array_size;i++){
        array1[i] = rand()%1000;
	printf("array[%d] = %d\n",i,array1[i]);
    }

  return 0;
}
