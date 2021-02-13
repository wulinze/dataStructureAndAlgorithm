//
//template<typename T>
//void swap(T& _a, T& _b);

template<typename T>
void swap(T& a, T& b){
    int tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T max(T& a, T& b){
    if(a > b){
        return a;
    } else{
        return b;
    }
}

template<typename T>
T min(T& a, T& b){
    if(a < b){
        return a;
    } else{
        return b;
    }
}


void merge(std::vector<int>& nums, int p, int l){
    int r1, r2;
    r1 = ;

}