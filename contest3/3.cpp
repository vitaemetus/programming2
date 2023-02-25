#include <iostream>
using namespace std;

int main()
{
    int n, g, t;
    cin>>n;
    int a[1000];
    cin>>a[0];

    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        for (int k = 0; k < i; k++)
        {
            if (a[i - k - 1] < a[i - k])
            {
                t = a[i - k - 1];
                a[i - k - 1] = a[i - k];
                a[i - k] = t;
            }
        }
    }

    cin>>g;

    for (int i = 0; i < g; i++)
    {
        cout<<a[g - i - 1]<<" ";
    }

}