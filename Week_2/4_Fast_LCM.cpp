// fast algorithm for calculating LCM (Least Common Multiple). Note (1 <= 𝑎,𝑏 <= 10^7)
#include<iostream>

// function for calculating GCD
long long fastGCD(long long a, long long b) 
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

// function calculating LCM
long long fastLCM(long long a, long long b) 
{
    long long LCM = (a * b) / fastGCD(a, b);    //formula for calculating LCM.
    return LCM;
}

int main() 
{
    long long a, b;   
    std::cin >> a;
    std::cin >> b;
    std::cout << fastLCM(a, b) << "\n";
    return 0;
}