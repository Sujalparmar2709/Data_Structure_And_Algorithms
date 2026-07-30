#include<bits/stdc++.h>
using namespace std;
int main(){
    long long sum = 0;
    long long maxi = INT_MIN;
    
    int arr[] = {5,4,-1,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i<n; i++){
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0 ){
            sum = 0;
        }
    }
    cout<<maxi;
    return 0;
}