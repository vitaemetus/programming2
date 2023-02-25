#include <iostream>
using namespace std;

int main()
{
    int n, i, k;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        for(k = 0; k <= i; k++)
        {
            cout<<'+';
        }
        cout<<'\n';
    }
}