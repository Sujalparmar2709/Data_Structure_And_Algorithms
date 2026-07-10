#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your numbers ";
    cin>>n;
    int sum = 0;
    int ans = n;
    while(n != 0){
        int digit = n%10;
        int cube = digit * digit * digit;
        sum += cube;
        n = n/10;
    }
    if(sum == ans){
        cout<<"Armstrong Number ";
    }
    else{
        cout<<"Not a Armstrong Number";
    }
    

    return 0;
}