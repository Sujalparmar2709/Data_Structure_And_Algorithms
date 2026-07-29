#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 14;
    bool isExist = false;
    int i = 0;
    int j = n-1;
    
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            isExist = true;
            break;
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }
    if(isExist == true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}