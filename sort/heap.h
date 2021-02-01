#ifndef _SORT_H
#define _SORT_H
#include <bits/stdc++.h>
#endif

// priority_queue
// unfinished
template<tyname T, tyname C>
class Heap{
private:
    std::vector<T> nums;

    void adjustDown();
    void adjustUp();
public:
    void push(T num);
    T top();
    void pop();
};