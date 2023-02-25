#include <iostream>
using namespace std;

unsigned long long int fibonacci(unsigned int n)
{
    auto a = 0ull, b = 1ull, c = 1ull;
    auto i = 0ull;

    if (n == 1) {return 0;}
    if (n == 2) {return 1;}
    if (n == 3) {return 2;}

    for (i = 4ull; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    return(c);
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
// ваша реализация функции

int main()
{
    unsigned int n;
    cin >> n;
    cout << sum_of_numbers(fibonacci(n)) << endl;
    return 0;
}