//fast algorithm for calculating gcd. Note (1 <= a,b <= 2*10^9)
#include<iostream>

// function for calculating gcd
long long fastGCD( long long a,  long long b) 
{
    long long c;
    while (true)
    {
       c = a % b;
       if (c == 0)
       {
           break;
       }
       a = b; 
       b = c;
    }
    return b;
}

int main() 
{
    long long a, b;   
    std::cin >> a;   
    std::cin >> b;   
    std::cout << fastGCD(a, b) << "\n";   
    return 0;
}