/*Print N to 1 linearly using backtracking*/
#include<bits/stdc++.h>
using namespace std;

void print(int n , int i)
{
    if(n<i)
    return;

    else
    print(n,i+1);
    cout<<i<<endl;
}

int main()
{
    int n;
    cin>>n;
    print(n,1);
}