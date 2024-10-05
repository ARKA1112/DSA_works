#include <iostream>
#include <string>
#include <vector>


int doLinearSearch(std::vector<int> array,int target){
    auto sz = size(array);
    for (auto i=0; i<sz;i++){
        if (array[i] == target){
            std::cout<<"Target is found on index "<<i;
            return 0;
        }
    }
    std::cout<< "Target Not found";
    return -1;
}


int main(){
    std::vector<int> arr = {1,23,4,5,67,7};
    int target = 73;
    doLinearSearch(arr,target);
}