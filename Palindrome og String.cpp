#include<iostream>
using namespace std;

int main(){

    string str = "MADAM";
    
    int i = 0;
    int j = str.length()-1;

    bool check = true;

    while(i <= j){
        if(str[i] != str[j]){
            check = false;
        }
        i++;
        j--;
    }
    if(check == true){
        cout<<"Palindrome ";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}