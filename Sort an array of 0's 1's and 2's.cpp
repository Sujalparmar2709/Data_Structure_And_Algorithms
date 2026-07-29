#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 0, 2, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = 0; 
    int k = n-1;
    while(j<=k){
        if(arr[j] == 1){
            j++;
        }
        else if(arr[j] == 2){
            swap(arr[j], arr[k]);
            k--;
        }
        else{
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
    for(int l = 0; l<n; l++){
        cout<<arr[l]<<' ';
    }

    return 0;
}