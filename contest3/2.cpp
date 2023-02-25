#include <iostream>
using namespace std;

int main()
{
    int n, a_sum = 0;
    cin>>n;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        a_sum += a[i];
    }
    
    if (a_sum < 0 && a_sum % n != 0)
    {
        a_sum /= n;
        a_sum -= 1;
    }
    else
    {
        a_sum /= n;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a_sum)
        {
            cout<<a[i]<<" ";
        }
    }
}