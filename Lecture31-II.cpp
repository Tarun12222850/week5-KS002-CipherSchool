// Lecture 31 II - Merge Sort Pt 2

#include <iostream>
using namespace std;

void merge(int *arr, int start, int end){
    
}

void mergesort(int *arr, int start, int end){

    // base case
    if (start>=end){ //this implies there is only 1 element and now we cannot split it further
        return;
    }
    int mid;
    mid = (start+end)/2;
    
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);

    merge(arr, start, end);

}

int main(){
    int size_arr;
    int arr[5]={1,5,3,10,4};
    size_arr = 5;

    mergesort(arr, 0, size_arr-1);
    return 0;
}