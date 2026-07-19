#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,5,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    set<int>st;

    
    for(int i = 0; i<n; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i<m; i++){
        st.insert(arr2[i]);
    }
    for(int x : st){
        cout<<x<<" ";
    }
}