#include <iostream>
using namespace std;
void binary(unsigned int n)
{
    auto ans = 0, pow = 0;
    auto init = n;

    while (n)
    {
        n /= 2;
        pow += 1;
    }

    n = init;

    for(int i = 0; i < pow; i++)
    {
        for (int k = 0; k < (pow - i); k++)
        {
            ans = (n % 2);
            n /= 2;
        }
        n = init;
        cout<<ans;
    }

    if (init == 0) {cout<<init;}
}

int main()
{
    unsigned int n;
    cin >> n;
    binary(n);
    cout << endl;
    return 0;
}