#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long sum_primes(int limit) {
  long sum = 0;
  int i;
  int toAdd;
  for(i = 2; i < limit; i++) {
    int j;
    toAdd = 0;
    for(j = floor(sqrt(i)); j > 1; j--) {
      if (i % j == 0){
	toAdd = 1;
      }
    }
    if (toAdd == 0) {
      sum += i;
    }
  }
  return sum;
}



int main() {
  long thesum = sum_primes(2000000);
  //printf("%d\n", 5);
  printf("%ld\n", thesum);
}
