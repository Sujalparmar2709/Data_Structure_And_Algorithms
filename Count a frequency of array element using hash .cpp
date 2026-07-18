#include<iostream>

using namespace std;

int main(){

    int arr[] ={10,5,10,15,10,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    

    int hash[100] ={0};

    

    for(int i = 0; i<size; i++){

        hash[arr[i]]++;

    }

    cout<<"Frequency of 10 is "<<hash[10]<<endl;

    cout<<"Frequency of 15 is "<<hash[15];

}