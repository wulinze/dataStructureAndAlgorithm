#ifndef _SORT_H
#define _SORT_H
#include <bits/stdc++.h>
#endif

// priority_queue
// unfinished
namespace sort{
    template<typename T, typename C>
    class Heap{
    private:
        std::vector<T> nums;

        void adjustDown(int index);
        void adjustUp(int index);
    public:
        bool empty();
        void push(T num);
        T top();
        void pop();
        void show();
    };
}

template<typename T, typename C>
void sort::Heap<T, C>::adjustDown(int index){
    if(index >= this->nums.size()){
        throw std::runtime_error("Index Out of Size");
    }
    while(2*index+1 < this->nums.size()){
        int lchild = index*2+1;
        int rchild = index*2+2;
        if(rchild >= this->nums.size()){
            if(C()(this->nums[lchild], this->nums[index])){
                swap(this->nums[index], this->nums[lchild]);
                break;
            } else{
                break;
            }
        }
        if(C()(this->nums[lchild], this->nums[rchild])){
            if(C()(this->nums[lchild], this->nums[index])){
                swap(this->nums[index], this->nums[lchild]);
                index = lchild;
            } else{
                break;
            }
        } else{
            if(C()(this->nums[rchild], this->nums[index])){
                swap(this->nums[index], this->nums[rchild]);
                index = rchild;
            } else{
                break;
            }
        }
    }
}


template<typename T, typename C>
void sort::Heap<T, C>::adjustUp(int index){
    if(index >= this->nums.size()){
        throw std::runtime_error("Index Out of Size");
    }
    while(index){
        int parent = (index-1)/2;
        if(index % 2 == 0){
            if(C()(this->nums[index-1], this->nums[index])){
                index --;
            }
        }
        if(!C()(this->nums[parent], this->nums[index])){
            swap(this->nums[parent], this->nums[index]);
        } else{
            break;
        }
        index = parent;
    }
}

template<typename T, typename C>
void sort::Heap<T, C>::push(T num){
    this->nums.emplace_back(num);
    adjustUp(this->nums.size()-1);
}

template<typename T, typename C>
void sort::Heap<T, C>::pop(){
    if(!this->empty()){
        swap(nums[0], nums.back());
        nums.pop_back();
        if(!this->empty()){
            adjustDown(0);
        }
    } else{
        throw std::runtime_error("Heap is empty can't pop");
    }
}

template<typename T, typename C>
T sort::Heap<T, C>::top(){
    if(!this->empty()){
        return this->nums[0];
    } else{
        throw std::runtime_error("Heap is empty no top");
    }
}

template<typename T, typename C>
bool sort::Heap<T, C>::empty() {
    return this->nums.empty();
}

template<typename T, typename C>
void sort::Heap<T, C>::show() {
    for(auto& num : this->nums){
        std::cout << num << ' ';
    }
    std::cout << std::endl;
}


