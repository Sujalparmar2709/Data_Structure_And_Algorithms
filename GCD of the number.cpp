#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter your 1st numbers ";
    cin>>a;

    int b;
    cout<<"Enter your 2nd numbers ";
    cin>>b;

    for(int i = 1; i<=min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            cout<<" "<<i;
        }
    }

    return 0;
}