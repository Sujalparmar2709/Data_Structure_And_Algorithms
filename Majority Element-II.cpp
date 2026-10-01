#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 1, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    unordered_map<int,int> mp;
    
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }
    vector<int> ans;

    for (auto it : mp) {
        if (it.second > n / 3) {
            ans.push_back(it.first);
        }
    }

    for (int x : ans) {
        cout << x << " ";
    }
    
    return 0;
    
}

