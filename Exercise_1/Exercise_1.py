


# Find total number of primes below 1 million
# time python3 ./Exercise_1.py
# Try to use the python profiler cProfile to identify slow calls
# python3 -m cProfile ./Exercise_1.py
# can you optimise this further ? 

def isPrime(n) :
  for i in range(2,n):
    if (n%i == 0):
      return False

  return True

def main():

  maxp = 100000
  primes = []
  for i in range(2,maxp):
    if isPrime(i) :
      primes.append(i)
  print("There are ",  len(primes), " primes below ", maxp)


#Python idiom to get a main function
if __name__ == "__main__":
  main()

