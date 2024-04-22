#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void printv(vector <int> v){
    for(auto i = v.begin(); i != v.end(); i++){
        cout<<*i<<' ';
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int p=0; p<t; p++){
        int n;
        cin>>n;
        vector < long long int> v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        // printv(v);
        sort(v.begin(), v.end());
        // printv(v);
        long long int max, max1, max2;
        if(n==2){
            max = v[0]*v[1];
        }
        else{
            max1 = v[0]*v[1];
            max2 = v[n-1]*v[n-2];
            max = std:: max(max1,max2);
        }
        cout<<max<<endl;

    }
    return 0;
}