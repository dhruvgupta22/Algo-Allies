#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_vect(vector <long long int> v, long long int n){
    for(long long int i=0; i<n; i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";
}

long long int find_loc(vector <long long int> a, vector <long long int> b, long long int n, long long int l){
    long long int ans = n-1;
    for(long long int i=0; i<n; i++){
        if(b[i]>=a[l]){
            ans = i-1;
            break;
        }
    }
    return ans;
}

long long int rem(long long int n, long long int m){
    return n%m;
}

long long int M = 1e9 + 7;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector <long long int> a(n);
        vector <long long int> b(n);
        for(long long int i=0; i<n; i++){
            cin>>a[i];
        }
        for(long long int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        // print_vect(a, n);
        // print_vect(b, n);
        vector <long long int>loc;
        loc[0] = 0;
        for(int i=0; i<n; i++){
            for(int j=loc[i]; j<n; j++){
                if(b[j]>=a[i]){
                    loc[i+1] = j-1;
                }
            }
        } 
        long long int sol = 1;
        for(long long int l=0; l<n; l++){
            // cout<<find_loc(a,b,n,l) +1;
            if(loc[l+1]<0){
                sol = 0;
                break;
            }
            sol = ((sol%M)*((find_loc(a,b,n,l) -l + 1)%M))%M;
        }
        cout<<sol<<'\n';
    }
    return 0;
}

/*
5
6
9 6 8 4 5 2
4 1 5 6 3 1
3
4 3 2
3 4 9
1
2
1
3
2 3 4
1 3 3
12
2 3 7 10 23 28 29 50 69 135 420 1000
1 1 2 3 5 8 13 21 34 55 89 144

32
0
1
0
13824

*/
// 6 5 4 3 1 1
// 9 8 6 5 4 2
// * * 6 4 2 5
// * 6 * 4 2 5
// * * 5 4 2 6
// * 6 5 4 2 *
// * * 6 5 2 4
// * 6 * 5 2 4
// * 6 5 * 2 4
// * * 5 6 2 4
// * * 6 5 4 2
// * 6 * 5 4 2
// * * 5 6 4 2
// * 6 5 * 4 2
// * * 6 4 5 2
// * 6 * 4 5 2
// * * 5 4 6 2
// * 6 5 4 * 2