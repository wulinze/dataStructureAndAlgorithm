#ifndef _SORT_H
#define _SORT_H
#include <bits/stdc++.h>
#endif


void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

// three road
void three_quicsort(std::vector<int>& nums, int left, int right){

}

// random pivot
void random_quicksort(std::vector<int>& nums, int left, int right){
    if(left >= right)return;

    srand(time(0));
    int pivot = left + rand()%(right-left);
    int num = nums[pivot];

    int i=left, j=right;

    while(i < j){
        while(nums[j] >= num && i < j)j--;
        while(nums[i] <= num && i < j)i++;
        swap(nums[i], nums[j]);
    }
    swap(nums[pivot], nums[i]);

    random_quicksort(nums, left, i-1);
    random_quicksort(nums, i+1, right);
}

// first pivot
void quicksort(std::vector<int>& nums, int left, int right){
    if(left >= right)return;

    int pivot = left;
    int num = nums[pivot];

    int i=left, j=right;

    while(i < j){
        while(nums[j] >= num && i < j)j--;
        while(nums[i] <= num && i < j)i++;
        swap(nums[i], nums[j]);
    }
    swap(nums[pivot], nums[i]);

    quicksort(nums, left, i-1);
    quicksort(nums, i+1, right);
}

// insert sort
// linklist better
// vector only
void insertsort(std::vector<int>& nums){
    int l = nums.size();
    for(int i=0; i<l-1; i++){
        for(int j=0; j<=i; j++){
            if(nums[i+1] < nums[j]){
                for(int k=i; k>=j; k--){
                    swap(nums[k+1], nums[k]);
                }
                break;
            }
        }
    }
}

// heap sort
void heapsort(std::vector<int>& nums){

}

// bubble sort
void bubblesort(std::vector<int>& nums){
    int l=nums.size();
    for(int i=0; i<l; i++){
        for(int j=1; j<l-i; j++){
            if(nums[j] < nums[j-1])swap(nums[j], nums[j-1]);
        }
    }
}

// select sort
void selectsort(std::vector<int>& nums){
    int l = nums.size();
    for(int i=0; i < l; i++){
        int k=i;
        for(int j=i+1; j < l; j++){
            if(nums[k] > nums[j])k=j;
        }
        swap(nums[i], nums[k]);
    }
}

int main(){
    std::vector<int> data = {2,3,5,7,3,5,1,4,5,6,24};

    for(auto& p : data){
        std::cout << p << ' ';
    }
    std::cout << std::endl;

    // quicksort(data, 0, data.size()-1);
    insertsort(data);

    for(auto& p : data){
        std::cout << p << ' ';
    }
    std::cout << std::endl;

    return 0;
}

