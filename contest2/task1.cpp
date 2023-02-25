#include <iostream>
using namespace std;
int minus_of_int(int x)
{
    auto minus = -x;
    return(minus);
}
// ваша реализация функции
int main()
{
    int x;
    cin >> x;
    cout << minus_of_int(x) << std::endl;
    return 0;
}