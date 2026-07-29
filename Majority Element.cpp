#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }
    
    for(auto x : mp){
        if(x.second > n/2){
            cout<<x.first;
            return 0;
        }
    }
    cout<<"No Majority Element in the array ";
    return 0;
}