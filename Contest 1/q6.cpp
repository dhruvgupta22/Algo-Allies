#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    for(int len=4; len<=s.length(); len++){    
        for(int pos=0; pos<=s.length()-len; pos++){
            string sub = s.substr(pos,len);
            if(sub.find("bear") != string::npos){
                cout<<sub<<endl;
                count++;
            }
        }
    }
    // int len = s.length();
    // vector <int> post;
    // for(int pos=0; pos<len-4; pos++){
    //     string sub=s.substr(pos,4);
    //     if(sub == "bear"){
    //         post.push_back(pos);
    //     }
    // }

    cout<<count;
    return 0;
}
