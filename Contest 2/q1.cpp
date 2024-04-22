// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         unordered_set <string> S;
//         string str;
//         int n;
//         cin>>n;
//         cin>>str;
//         char ch1[200000];
//         char ch2[200000];
//         string sub1;
//         string sub2;
//         string sub;
//         for(int i=0; i<n-1; i++){
//             ch1[i]='\0';
//             ch2[n-i-2]='\0';
//             str.copy(ch1, i, 0);
//             str.copy(ch2, n-i-2, i+2);
//             sub1 = ch1;
//             sub2 = ch2;
//             sub = sub1+sub2;
//             S.insert(sub);
//         }
//         cout<<S.size()<<endl;
//     }
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    int n;
    int ans;
    while(t--){
        cin>>n;
        cin>>str;
        int count=0;
        for(int i=0; i<=n-3; i++){
            if(str[i]==str[i+2])count++;
        }
        ans = n-1-count;
        cout<<ans<<endl;
    }
    return 0;
}
