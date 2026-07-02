#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,1,2,2,2,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    
    for(int j = 1; j<size; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    
    for(int k = 0 ;k<=i; k++){
        cout<<arr[k]<<" ";
    }
}