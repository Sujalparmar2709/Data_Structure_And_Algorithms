#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    int buy = prices[0];
    int maxi = 0;
    for(int i = 1; i<n; i++){
        int cost = prices[i] - buy;
        if(cost < 0){
            buy = prices[i];
        }
        else{
            maxi = max(maxi, cost);
        }
    }
    cout<<maxi;
}