#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int k = 3;
    
    k = k % size;
    
    int temp[k];
    
    for(int i = 0; i<k; i++){
        temp[i] = arr[i];
    }
    
    for(int i = k; i<size; i++){
        arr[i-k] = arr[i];
    }
    
    for(int i = size-k ; i<size; i++){
        arr[i] = temp[i-(size-k)];
    }
    
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}