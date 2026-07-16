#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,2,1,6,3,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int smallest = arr[0];
    for(int i = 1; i<size; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }
cout<<"Smallest Element: "<<smallest<<endl;
    int largest = arr[0];
    for(int i = 1; i<size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element: "<<largest<<endl;

    int secondsmallest = largest;
    
    for(int i = 0; i<size; i++){
        if(secondsmallest > arr[i] && arr[i] != smallest){
            secondsmallest = arr[i];
        }
    }
    cout<<"Second Smallest Element: "<<secondsmallest<<endl;

    int secondlargest = -1;
    
    for(int i = 0; i<size; i++){
        if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    cout<<"Second largest Element: "<<secondlargest<<endl;
    
    return 0;
    
    
}
