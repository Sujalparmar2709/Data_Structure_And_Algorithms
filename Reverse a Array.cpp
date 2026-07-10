#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    int j = size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}