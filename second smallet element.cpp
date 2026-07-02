#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int smallest = arr[0];
    for(int i = 1; i<size; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }
cout<<"There is Your Smallest number of this given array "<<smallest<<endl;
    int largest = arr[0];
    for(int i = 1; i<size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"This is a largest element of this array "<<largest<<endl;
    
    int ssm = largest;
    
    for(int i = 0; i<size; i++){
        if(ssm > arr[i] && arr[i] != smallest){
            ssm = arr[i];
        }
    }
    cout<<"This is a second smallest element of this array "<<ssm<<endl;
    
    
    return 0;
    
    
}