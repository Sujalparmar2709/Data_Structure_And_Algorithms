#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 7, 7, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int largest = arr[0];
    
    for(int i = 1; i<size; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    cout<<"Largest Element in the array "<<largest<<endl;;
    
    int secondlargest = -1;
    
    for(int i = 0; i<size; i++){
        if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    cout<<"Second largest Element in the array "<<secondlargest;
}