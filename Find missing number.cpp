#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int hash[n + 2] = {0};

    for(int i = 0; i < n; i++) {
        hash[arr[i]] = 1;
    }

    for(int j = 1; j <= n + 1; j++) {
        if(hash[j] == 0) {
            cout << j;
            break;
        }
    }
}