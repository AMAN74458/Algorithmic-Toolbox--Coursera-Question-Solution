// fast algorithm for finding last digit of the sum sum of square of fibonacci numbers. Note (0 ≤ 𝑛 ≤ 10^14)
#include<iostream>

long long fastFibonacci(long long n)
{
    long long a = 0, b = 1, c = a + b;
    if (n == 0)
      return n;

    while (1 < n--) 
    {
      c = (a + b) % 10;
      a = b;
      b = c;
    }
  return c;
}

long long last_digit_of_the_sum_of_square_of_fibonacci_numbers(long long n)
{
    long long sum = fastFibonacci(n % 60) * fastFibonacci(n % 60 + 1); // formula f(n)*f(n+1)
    return sum % 10;
}

int main() {
    unsigned long long n;
    std::cin >> n;
    std::cout << last_digit_of_the_sum_of_square_of_fibonacci_numbers(n) << "\n";
    return 0; 
}