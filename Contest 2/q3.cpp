#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s, r;
        cin>>n>>s>>r;
        vector <int> v(n);
        v[0] = s-r;
        int quot = r/(n-1);
        int rem = r - quot*(n-1);
        for(int i=1; i<n; i++){
            v[i]=quot;
        }
        int k=1;
        while(rem-- && k<n){
            v[k++]++;
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
// 7
// 2 2 1
// 2 4 2
// 4 9 5
// 5 17 11
// 3 15 10
// 4 4 3
// 5 20 15

// 1 1
// 2 2 
// 1 2 2 4
// 6 4 2 3 2
// 5 5 5
// 1 1 1 1
// 1 4 5 5 5