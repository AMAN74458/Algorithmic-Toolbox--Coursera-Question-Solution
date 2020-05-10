// fast algorithm for calculating fibonacci numbers. Note (0 <= n <= 45) only.
#include<iostream>

// 0 <= n <= 45 only
//non-standard feature of declaring array
// This commented function is also a fast algo for calculating fibonacci number

/*int fastFibonacci(int n) {
  int numbers[n+2];  // number[n+2] 2 is added because in next two line we are assigning value 0 and 1 in index 0 and 1. So we assigned two indices and now there is less memory for n, which will enterd by user, so we increase that memory by adding 2 because we occupied two indices by assigning so 2 blocks of memory is consume so by adding 2 we get two memory block back.
  numbers[0] = 0;
  numbers[1] = 1;
  for (int i = 2; i <= n; i++)
  {
      numbers[i] = numbers[i - 1] + numbers[i - 2];
  }
  return numbers[n];
}*/

// simple, easy to understand and takes less space while writing
long long fastFibonacci3(long long n)
{
  long long a = 0, b = 1, c = a + b;
  if (n == 0)
    return n;
    
  while (1 < n--) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

int main() {
  long long n;  
  std::cin >> n;    
  //std::cout << fastFibonacci(n) << std::endl;   
  std::cout << fastFibonacci3 (n) << "\n";    
  return 0;
}