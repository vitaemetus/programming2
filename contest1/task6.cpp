#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int k = 1; k <= m; k++)
            {
                cout<<'+';
            }
            cout<<'\n';
        }

        if (i != 1 && i != n)
        {
            for (int k = 1; k <= m; k++)
            {
                if (k == 1 || k == m)
                {
                    cout<<'+';
                }
                else
                {
                    cout<<' ';
                }
            }
            cout<<'\n';
        }
    }
}