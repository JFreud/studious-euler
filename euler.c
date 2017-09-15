#include stdio.h
#include stlib.h


int sum_primes(int limit) {
  int sum = 0;
  int i;
  for(i = 1; i < limit; i++) {
    int j;
    int toAdd = 0;
    for(j = floor(sqrt(i)); j > 1; i++) {
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
  printf(sum_primes(30));
}
