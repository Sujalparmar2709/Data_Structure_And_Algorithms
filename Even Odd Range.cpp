#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter your number ";
    cin>>a;

    cout<<"Even number is :- ";
    for(int i = 1; i<a; i++){
        if(i%2 == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    int b;
    cout<<"Enter your number ";
    cin>>b;

    cout<<"Odd number is :- ";
    for(int i = 1; i<b; i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }

    return 0;
}