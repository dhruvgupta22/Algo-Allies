#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

void read_array(vector <int> a, int n){
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
}
pair<int,int> create_pair(int x, int y){
    pair <int,int> p;
    p.first = x;
    p.second = y;
    return p;
}
bool comp(pair<int,int> p1, pair<int,int> p2){
    return p1.first<p2.first;
}
int main(){
    int t;
    cin>>t;
    for(int p=0; p<t; p++){
        int n, k;
        cin>>n>>k;
        vector <int> a, b;
        // read_array(a, n);
        // read_array(b, n);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        vector <pair <int,int>> v1, v2;
        for(int i=0; i<n; i++){
            v1.push_back(create_pair(a[i], 1+i));
        }
        sort(v1.begin(), v1.end(), comp);
        sort(b.begin(), b.end());
        for(int i=0; i<n; i++){
            v2.push_back(create_pair(v1[i].second, b[i]));
        }
        sort(v2.begin(), v2.end(), comp);
        for(int i=0; i<n; i++){
            cout<<v2[i].second<<' ';
        }
        cout<<endl;
    }

    return 0;
}
