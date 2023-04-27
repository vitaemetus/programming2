#include <iostream>

double* lower_bound(double *begin, double *end, double key) {
    auto distance = (end - begin);
    auto result = begin;
    while (distance > 0) {
        auto middle = begin + distance / 2;
        if (*middle >= key && *(middle-1) < key){
            begin = end = middle;
        }
        else if (*middle < key){
            begin = middle + 1;
        }
        else{
            end = middle - 1;
        }
        distance = (end - begin);
        result = begin;
    }
    return result;
}

double arr[100];

int main(){
    int n;
    std::cin>>n;
    for (int i = 0; i < n; i++){
        std::cin>>arr[i];
    }
    double key;
    std::cin>>key;
    double* lb;
    lb = lower_bound(&arr[0], &arr[n-1], key);
    std::cout<<*lb;
}