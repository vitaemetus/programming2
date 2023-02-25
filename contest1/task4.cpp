#include <iostream>
using namespace std;

int main()
{
    int a, b, i, k;
    cin>>a>>b;
    for(i = 0; i < a; i++)
    {
        for (k = 0; k < b; k++)
        {
            cout<<"+";
        }
        cout<<"\n";
    }    
}