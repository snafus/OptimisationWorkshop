#include <iostream>
#include <vector>
#include <cmath>

// Find total number of primes below 1 million
// Compile with
// g++ Exercise_1.cpp -std=c++14 -OX -g -o Exercise_1
// or
// clang++ Exercise_1.cpp -std=c++14 -OX -g -o Exercise_1
// where X goes from 0 to 3
// For older compilers, replace c++14 with c++11 or c++0x
// Time and profile your output
// time ./Exercise_1
// valgrind --tool=callgrind ./Exercise_1
// use callgrind_annotate --auto=yes --show-percs=yes callgrind.out.pid to view 
// (change pid to actuall pid number used)

bool isPrime(unsigned int n) {
  for (unsigned int i = 2; i < n; i++) {
    if (n%i == 0) {
      return false;
    }
  }
  return true;
}


int main() {

  unsigned int max = 1000000;
  std::vector<unsigned int> primes;
  for (unsigned int i = 2; i < max; ++i) {
    if (isPrime(i)) {
      primes.push_back(i); 
    }
  }
  std::cout << "There are " << primes.size() << " primes below " << max << std::endl;

  return 0;
}
