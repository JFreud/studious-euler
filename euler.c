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

int smol_multi(int cap) {
  int smol = 1;
  int i;
  int isDivis;
  while (isDivis != 1) {
    isDivis = 1;
    for (i = 1; i < cap; i++) {
      if (smol % i != 0) {
	isDivis = 0;
      }
    }
    smol++;
  }
  return smol - 1;
}

int main() {
  long thesum = sum_primes(2000000);
  //printf("%d\n", 5);
  printf("The sum of primes below 2000000 is %ld\n", thesum);

  int multiple = smol_multi(20);
  printf("The smallest positive number divisible by nums 1-20 is %d\n", multiple);
}
