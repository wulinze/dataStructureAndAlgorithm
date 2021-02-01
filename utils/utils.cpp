#include"utils.h"

template<typename T>
void swap(T& a, T& b){
    int tmp = a;
    a = b;
    b = tmp;
}