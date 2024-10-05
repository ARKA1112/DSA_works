#include <iostream>
#include <vector>

int binary_search(std::vector<int> &vec, int target){
    int low = 0;
    int high = vec.size()-1;
    //int mid =  (high + low)/2;
    
    while (low <= high){
        int mid = (high + low)/2;
        if (target == vec[mid]){
            std::cout<<"Target is found in "<<mid<<std::endl;
            return 0;
        }
        else if (target < vec[mid]){
            high = mid;
            mid++;
        }
        else if (target > vec[mid]){
            low = mid;
            mid++;
        }
    }
    std::cout<<"target not found"<<std::endl;
    return -1;
}


int main(){
    std::vector<int> vec = {1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22, 23};
    binary_search(vec,22);
    return 0;
}