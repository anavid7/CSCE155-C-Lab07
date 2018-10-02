/**
 * Statistics main driver program
 */
#include <stdlib.h>
#include <stdio.h>
#include "stats.h"
#include <time.h>


#define SIZE 500

int main(int argc, char** argv) {

  //seed the random number generator with the current time
  srand(time(NULL));

  int min, max, size;
  double mean;

  printf("Enter the amount of numbers you'd like to find the stats for: ");
  scanf("%d", &size);

  if(size > SIZE) {
    printf("ERROR: program does not support that many integers!");
	  exit(1);
	}
  int arr[500];


	//TODO (Activity 3): change your delcaration and initialization to use
	// a dynamic array and malloc instead



	readInArray(arr, size);


  min = getMin(arr, size);
  max = getMax(arr, size);
  mean = getMean(arr, size);
//  printArray( , );

  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  printf("Mean: %.2f\n", mean);

  return 0;

}
