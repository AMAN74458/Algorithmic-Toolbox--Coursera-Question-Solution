// fast algorithm for finding last digit of the sum of the fibonacci numbers again. Note (0 ≤ 𝑚 ≤ 𝑛 ≤ 10^14)
#include<iostream>

long long fastFibonacci(long long n)
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

long long last_digit_of_partial_fibonacci_sum(long long m, long long n)
{
    long long last_digit_of_sum =  fastFibonacci(n % 60 + 2) - fastFibonacci(m % 60 + 1); // formula f(n+2) - f(n+1) // mod 60 to make large number small and it doesnot affect the answer becuase Fibonacci numbers repeats with a cycle of 60.
    return ((last_digit_of_sum % 10) + 10) % 10; // previously i coded (last_digit_of_sum % 10) it failed in test case 19/19 so i changed code fix my output error in test case 19/19
}

int main() {
  unsigned long long m, n;
  std::cin >> m;
  std::cin >> n;
  std::cout << last_digit_of_partial_fibonacci_sum(m, n) << "\n";
  return 0;
}