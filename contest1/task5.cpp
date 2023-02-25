#include <iostream>
using namespace std;

int main()
{
    int max, n_temp;
    cin>>n_temp;
    const int n = n_temp;
    int arr[100001];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    max = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) > abs(max))
        {
            max = arr[i];
        }
    }

    cout<<max<<endl;
    return 0;
}