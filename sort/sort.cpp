#include <bits/stdc++.h>


void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}
// first pivot
void quicksort(std::vector<int>& nums, int left, int right){
    if(left >= right)return;

    srand(time(0));
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

int main(){
    std::vector<int> data = {2,3,5,7,3,5,1,4,5,6,24};

    for(auto& p : data){
        std::cout << p << ' ';
    }
    std::cout << std::endl;

    quicksort(data, 0, data.size()-1);

    for(auto& p : data){
        std::cout << p << ' ';
    }
    std::cout << std::endl;

    return 0;
}

