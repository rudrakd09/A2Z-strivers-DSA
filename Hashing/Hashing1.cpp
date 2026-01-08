/*Count the number of characters using hashing */
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    //precompute
    int hash[256]={0};
    for(int i=0;i<a.length(); i++){
        hash[a[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        //fetch
        char x;
        cin>>x;
        cout<<hash[x]<<endl;

    }
    return 0;
}