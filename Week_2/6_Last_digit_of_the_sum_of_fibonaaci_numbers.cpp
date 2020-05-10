#include<iostream>

// function for finding the last digit of the sum of fibonacci numbers
unsigned long long Fast_last_digit_of_the_sum_of_fibonacci_numbers(unsigned long long n)
{
  unsigned long long a = 0, b = 1, c = a + b, sum = 0;
  // length of the period of mod 10 is 60
  unsigned long long limit = n % 60;
    if (limit == 0)
    {
      return limit;
    }
    
    for (int i = 1; i < limit; i++) {
      c = (a + b);
      sum += c;    
      a = b;
      b = c;
    }
  return (sum + 1) % 10;
}


int main() 
{
    unsigned long long n;
    std::cin >> n;
    std::cout << Fast_last_digit_of_the_sum_of_fibonacci_numbers(n) << "\n";
    return 0; 
}