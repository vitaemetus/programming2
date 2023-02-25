#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}