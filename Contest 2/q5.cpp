#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        char *ch1;
        char *ch2;
        vector <string> v;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>i; j--){
                s.copy(ch1, 0, i+1);
                s.copy(ch2, j, n-j);
                string sub1 = ch1;
                string sub2 = ch2;
                string sub = sub1+sub2;
                v.push_back(sub);
            }
        }
        for(auto x:v){
            cout<<x<<' ';
        }
        cout<<endl;
    }

    return 0;
}
// 5
// abbbababac
// xyzxyzabcxxx
// milfflim
// kkkrrriiishkkrs
// geeetttktteegg

// abbba
// xxxx
// milfflim
// kkk
// geeeg


