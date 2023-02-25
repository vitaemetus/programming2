#include <iostream>
#include <chrono>

void complete()
{ 
    
}

int main()
{
    int n;
    int arr[1000];
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
        
    }



    auto begin = std::chrono::steady_clock::now();
    for (unsigned cnt = 100000; cnt != 0; --cnt)
    complete();
    auto end = std::chrono::steady_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    std::cout<<"\n\n";
    std::cout<<time_span.count()<<std::endl;
    return 0;
}