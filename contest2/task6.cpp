#include <iostream>
using namespace std;

unsigned long long int factorial(unsigned int n)
{
    auto ans = 1ull;
    while(n)
    {
        ans *= n;
        n -= 1;
    }
    return ans;
}

unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << sum_of_numbers(factorial(n)) << endl;
    return 0;
}