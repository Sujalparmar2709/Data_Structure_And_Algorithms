#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter your numbers ";
    cin>>a;

    int count = 0;

    while(a != 0){
        a = a/10;
        count++;
    }
    cout<<count;


    return 0;
}