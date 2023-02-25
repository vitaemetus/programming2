#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long f = 1;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        f *= (n - i);
    }
    cout<<f<<endl;
}