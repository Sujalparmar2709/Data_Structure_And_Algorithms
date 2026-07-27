#include <bits/stdc++.h>
using namespace std; 
int main(){
    vector<int> arr = {10,5,2,7,1,9};
    int i = 0;
    int maxLen = 0;
    int sum = 0;
    int k;
    cout<<"Enter your kth element ";
    cin>>k;
    
    for(int j = 0; j<arr.size(); j++){
        sum  += arr[j];
        while(sum > k){
            sum -= arr[i];
            i++;
        }
        if(sum == k){
            int length = j-i+1;
            if(length > maxLen){
                maxLen = length;
            }
        }
    }
    
    cout<<"Longest Length = " <<maxLen;
    return 0;
}