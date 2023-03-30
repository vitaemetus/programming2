#include <iostream>
using std::cout;
using std::endl;
int main()
{
    char a[11] = {"0123401234"};
    cout<<a[9]<<endl;
    cout<<a[10]<<endl;
    char *p = &a[0];
    cout << (int)(*(p + 7) - *p) << endl;
    return 0;
}