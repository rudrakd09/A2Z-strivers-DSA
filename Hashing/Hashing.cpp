/*counting frequencies of array elements*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[1000001]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
    return 0;
}
