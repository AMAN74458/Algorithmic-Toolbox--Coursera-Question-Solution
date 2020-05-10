// fast algorithm for calulating Fibonacci Numbers Again. Note (1 <= 𝑛 <= 10^14, 2 <= 𝑚 <= 10^3)
#include<iostream>

// Learn pisano period before looking this function. If you don't know pisano period you will not understand this.
// ex: while for 𝑚 = 3 the period is 01120221 and has length 8.
// so user will enter m, and for that m this function will calculate the period but we don't want period, we want its length.
// so basically this function will find the length of the period of m
// period always start form 0 and 1. first 0 then 1, so by focusing on this I create a function which checks that if a == 0 && b == 0 then retrun i and this 'i' is the length of that period. Study more in PDF 'Algorithmic Warmup'.
long long pisanoPeriodlength(long long m)
{
    long long a = 0, length, b = 1, c=a+b;
    for (int i = 0; i < m * m; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
        if ((a == 0) && (b == 1))
        {
            length = i + 1;
        }
    }
    return length;
}

// after pisanoPeriodlength calculates the lenght of period it passed to the function fibonacciNumberAgain
long long fibonacciNumberAgain(long long n, long long m)
{
    long long remainder = n % pisanoPeriodlength(m);
    long long a = 0, b = 1, c=remainder;
    while (1 < remainder--)
    {
        c = (a + b) % m;
        a = b;
        b = c;
    }
  return c;
}

int main() 
{
    long long n, m;
    std::cin >> n;
    std::cin >> m;
    //std::cout << "Length = " << pisanoPeriodlength(m) << "\n";
    std::cout << fibonacciNumberAgain(n, m) << "\n";
    return 0;
}