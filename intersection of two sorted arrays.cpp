#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[] = {1,2,2,3,3,4,5,6};
    int b[] = {2,3,3,5,6,6,7};
    
    int n1  = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int i = 0;
    int j = 0;
    vector<int> ans;
    while( i < n1 && j < n2){
        if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
        else if(a[i] == b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}