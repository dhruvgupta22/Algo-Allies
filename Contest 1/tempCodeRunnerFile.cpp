#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length();j++){
            string sub = s.substr(i,j-i+1);
            if(sub.find("bear") != string::npos)count++;
        }
    }
    cout<<count;
    return 0;
}
