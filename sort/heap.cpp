#include "heap.h" 
#include "utils/utils.h"

template<typename T, typename C>
void Heap::adjustDown(int index){
    if(index >= this->nums.size()){
        throw runtime_error("Index Out of Size");
    }
    while(index < this->nums.size()){
        int lchild = index*2+1;
        int rchild = index*2+2;
        if(C(this->nums[lchild], this->nums[rchild])){
            if(C(this->nums[lchild], this->nums[index)){
                swap(this->nums[index], this->nums[lchild]);
                index = lchild;
            } else{
                break;
            }
        } else{
            if(C(this->nums[rchild], this->nums[index)){
                swap(this->nums[index], this->nums[rchild]);
                index = rchild;
            } else{
                break;
            }
        }
    }
}


template<typename T, typename C>
void Heap::adjustUp(int index){
    if(index >= this->nums.size()){
        throw runtime_error("Index Out of Size");
    }
    while(index){
        int parent = (index-1)/2;
        if(index % 2 == 0){
            if(C(this->nums[index-1], this->nums[index])){
                index --;
            }
        }
        if(!C(this->nums[parent], this->nums[index])){
            swap(this->nums[parent], this->nums[index]);
        } else{
            break;
        }
        index = parent;
    }
}

template<typename T, typename C>
void Heap::push(T num){
    this->nums.emplace_back(num);
    adjustUp(this->nums.size()-1);
}

template<typename T, typename C>
void Heap::pop(){
    swap(nums[0], nums.back());
    nums.pop_back();
    adjustDown(0);
}

template<typename T, typename C>
T Heap::top(){
    return this->nums[0];
}