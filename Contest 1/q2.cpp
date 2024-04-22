#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int p=0; p<t; p++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set <string> melodies;
        for(int i=0; i<n-1; i++){
            string temp = s.substr(i,2);
            melodies.insert(temp);
        }
        cout<<melodies.size()<<endl;


    }

    return 0;
}
