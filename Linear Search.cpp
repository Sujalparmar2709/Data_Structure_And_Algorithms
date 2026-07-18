#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int num;
    cout<<"Enter your find num ";
    cin>>num;
    bool isfound = false;
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            cout<<"Index is "<<i;
            isfound = true;
        }
    }
    if(isfound == false){
        cout<<" -1 ";
    }
}