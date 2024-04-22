#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    vector <int> sum(n+1);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sum[0]=0;
    for(int i=0; i<n; i++){
        sum[i+1] = sum[i] + v[i];
    }
    int count=0;
    for(int i=1; i<n; i++){
        if(sum[i] == sum[n]- sum[i])count++;
    }
    cout<<count<<endl;
    return 0;
}
// 9
// 1 5 -6 7 9 -16 0 -2 2
