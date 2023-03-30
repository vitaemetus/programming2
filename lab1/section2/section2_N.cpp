#include <iostream>
#include <chrono>
#include <typeinfo>
#include <random>
#include <fstream>

int bin_search(int arr[], int arr_sz, int x){
    auto low = 0;
    auto mid = 0;
    auto high = arr_sz - 1;

    while (low != high){
        mid = (low + high) / 2;

        if (x == arr[mid])
        return mid;

        else if (arr[mid] < x)
        low = mid + 1;

        else 
        high = mid - 1;
    }
    return 0;
}

int generate_x(int arr_sz){
    auto begin = std::chrono::steady_clock::now();
    auto epoch = begin.time_since_epoch();
    auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(epoch);

    auto seed = time_span.count();
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<unsigned>dstr(0, arr_sz - 1);

    int x = dstr(rng);
    x = dstr(rng);
    return(x);
}

int find_x(int arr[], int arr_sz, int x){
    for (int i1 = 0; i1 < arr_sz; i1++){
        auto x1 = arr[i1];
        for (int i2 = i1 + 1; i2 < arr_sz; i2++){
            auto x2 = arr[i2];
            if (x1 + x2 == x){
                return(1);
            }
        }
    }
    return(0);
}

int arr[100000000];

int main(){
    std::ofstream results;
    results.open("section2.txt", std::ios_base::app);
    for (int arr_sz = 100000; arr_sz <= 100000000; arr_sz += 100000){
        int avg_bin = 0;
        for (int k = 0; k < 100; k++){
                auto x = generate_x(arr_sz);
                for (int i = 0; i < arr_sz; i++){
                    arr[i] = i;
                }                
                auto begin = std::chrono::steady_clock::now();
                find_x(arr, arr_sz, x);
                auto end = std::chrono::steady_clock::now();
                auto time_span_bin = (end - begin);
                avg_bin += time_span_bin.count();
        }
        results<<(avg_bin / 100)<<'\n';
    }
    results.close();
    std::cout<<"Done!"<<std::endl;
    return 0;
}


