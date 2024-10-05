#include <iostream>
using namespace std;



void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


void insertion_sort(int s[], int n){
    int i,j;
    for (i=1;i<=n;i++){
        j = i;
        while (j>0 && s[j] < s[j-1]){
            swap(s[j],s[j-1]);
            j=j-1;
        }
    }
}


int main(){
    int arr[] = {6,4,5,8,10,33};
    int n = sizeof(arr);


    insertion_sort(arr, n);


    cout<<"Sorted array: ";
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}