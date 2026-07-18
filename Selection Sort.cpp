#include<iostream>
using namespace std;
int main(){
    int arr[] ={10,5,10,15,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size; i++){
        int minIndex = i;
        for(int j = 1; j<size-1; j++){
            if(arr[j] < arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

