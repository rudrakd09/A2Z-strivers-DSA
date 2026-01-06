/*Check if a string is palindrome or not*/
#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s){
    if(i>=s.length()/2){
        return true;
    }else{
        if(s[i]!=s[s.length()-i-1]){
            return false;
        }
        return palindrome(i+1, s);
    }
};
int main(){
    string s;
    cin>>s;
    if(palindrome(0,s)){
        cout<<"Palindrome";

    }else{
        cout<<"Not a Palindrome";
    }
    return 0;
}