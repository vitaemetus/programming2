#include <iostream>
using namespace std;

int main()
{
    int n, g, t;
    cin>>n;
    int a[1000], b[1000], ind[1000];
    cin>>a[0];
    b[0] = a[0];

    //создание массива значений a[], расположенных по возрастанию. в массиве b[] сохраняется порядок ввода
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        b[i] = a[i];
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

    //поиск индексов g наибольших элементов
    for (int i = 0; i < g; i++)
    {
        t = a[i];
        for (int k = 0; k < n; k++)
        {
            if (b[k] == t)
            {
                ind[i] = k;
                k = n;
            }
        }
    }

    //парллельная сортировка элементов a[] и ind[] по возрастанию
    for (int i = 1; i < g; i++)
    {
        for (int k = 0; k < i; k++)
        {
            if (ind[i - k - 1] > ind[i - k])
            {
                t = a[i - k - 1];
                a[i - k - 1] = a[i - k];
                a[i - k] = t;

                t = ind[i - k - 1];
                ind[i - k - 1] = ind[i - k];
                ind[i - k] = t;
            }
        }
    }

    for (int i = 0; i < g; i++)
    {
        cout<<a[i]<<" ";
    }
}