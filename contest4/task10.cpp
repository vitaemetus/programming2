#include <iostream>
#include <cmath>

int main(){
    unsigned int size;
    int p_size = -1;
    bool Less = true;

    std::cin >> size; //Мбайт
    size *= 1048576; //байт
    while (Less){
        p_size += 1;
        if (pow(2, p_size) > size){
            Less = false;
        }
    }
    std::cout<<p_size/8 + 1;
    return 0;
}