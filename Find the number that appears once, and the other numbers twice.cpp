#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> hash;

    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    for(int j = 0; j < n; j++) {
        if(hash[arr[j]] == 1) {
            cout << arr[j];
            break;
        }
    }
}