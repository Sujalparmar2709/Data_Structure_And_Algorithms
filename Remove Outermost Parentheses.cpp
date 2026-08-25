#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "((()))";
    int n = s.length();
    int count = 0;
    string ans = "";

    for(int i = 0; i<n; i++){
        if(s[i] == ')'){
            count --;
        }
        if(count != 0){
            ans += s[i];
        }
        if(s[i] == '('){
            count ++;
        }
    }
    cout<<ans;
}