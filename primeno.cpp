#include<iostream>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void print_primes(int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        if (is_prime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    print_primes(100);
    return 0;
}
