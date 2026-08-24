#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix = { 
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    vector<int> result;
    int n = matrix.size();
    int m = matrix[0].size();

    int dir = 0;
    int top = 0;
    int down = n-1;

    int left = 0;
    int right = m -1;

    while(top <= down && left <= right){
        if(dir == 0){
            for(int i = left; i <= right; i++){
                result.push_back(matrix[top][i]);
            }
            top++;
        }
        if(dir == 1){
            for(int i = top; i <= down; i++){
                result.push_back(matrix[i][right]);
            }
            right--;
        }
        if(dir == 2){
            for(int i = right; i >= left; i--){
                result.push_back(matrix[down][i]);
            }
            down--;
        }
        if(dir == 3){
            for(int i = down; i >= top; i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        dir++;
        if(dir == 4){
            dir = 0;
        }
    }

    for(int x  : result ){
        cout<<x<<" ";
    }
    return 0;

}