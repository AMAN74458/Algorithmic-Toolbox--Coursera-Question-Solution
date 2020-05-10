// fast algorithm for calculating last digit of large fibonacci numbers. Note (0 <= n <= 10^7)
#include<iostream>

/*int slow_last_digit_of_large_fibonacci_number(int n) {
    int F[n + 2];
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i < n; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n] % 10;
}*/

long long fast_last_digit_of_large_fibonacci (long long n)
{
    long long a = 0, b = 1, c = a + b;
    while (1 < n--) {
      c = (a + b) % 10;
      a = b;
      b = c;
    }
    return c;
}

int main() {
  long long n;
  std::cin >> n;    
  //std::cout << slow_last_digit_of_large_fibonacci_number(n) << "\n";   
  std::cout << fast_last_digit_of_large_fibonacci(n) << "\n"; 
  return 0; 
}