#ifndef _SORT_H
#define _SORT_H
#include <bits/stdc++.h>
#include "sort/sort.h"
#endif

int main() {
    std::cout << "Hello World" << std::endl;
    std::vector<int> data = {2,3,5,7,3,5,1,4,5,6,24};

    for(auto& p : data){
        std::cout << p << ' ';
    }
    std::cout << std::endl;

//    quicksort(data, 0, data.size()-1);
    insertsort(data);
    auto h = heapsort(data);

    for(auto& p : data){
        std::cout << p << ' ';
    }
    std::cout << std::endl;
    for(auto& p : h){
        std::cout << p << ' ';
    }
    std::cout << std::endl;
    return 0;
}