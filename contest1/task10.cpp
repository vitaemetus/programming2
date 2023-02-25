#include <iostream>
using namespace std;

int main()
{
    bool b = 1;
    char v;
    int n = 0;
    while (b > 0)
    {
        cin>>v;
        if (v == '1')
        {
            n++;
        }

        else if (v != '0')
        {
            b = 0;
        }
    }
    cout<<n<<endl;
}