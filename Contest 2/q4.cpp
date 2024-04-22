#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector <int> sum(n+1);
    int ans=0;
    sum[0]=0;
    for(int i=0; i<n; i++){
        sum[i+1] = v[i] + sum[i];
    }
    int S;
    for(int len=n; len>0; len--){
        for(int pos=0; pos<n-len+1; pos++){
            S = sum[pos+len] - sum[pos];
            if(S<=t){
                ans = len;
                break;
            }
        }
        if(ans==len)break;
    }
    cout<<ans;
    return 0;
}
// 4 5
// 3 1 2 1

// 3

// 3 3
// 2 2 3

// 1