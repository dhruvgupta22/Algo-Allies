#include <iostream>
#include <string>
#include <vector>
using namespace std;

void divide(vector<int> arr, int x, int n){
    for(int i=0; i<n; i++){
        arr[i] = x/n;
    }
    int rem = x%n;
    int i=0;
    while(rem>0){
        arr[i]++;
        i++;
        rem--;
    }
}
int main(){
    int n, x, y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    int len = s.length();
    vector <int> arr;
        for(int i=0; i<n; i++){
        arr.push_back(len/n);
    }
    int rem = x%n;
    int k=0;
    while(rem>0){
        arr[k] +=1;
        k++;
        rem--;
    }
    bool flag=1;
    for(int i=0; i<n; i++){
        if(len<n*x ||len>y*n){
            flag = 0;
            break;
        }
    }
    if(!flag)cout<<"No solution";
    else{
        for(int i=0 , pos=0; i<n; i++){
            string sub = s.substr(pos, arr[i]);
            cout<<sub<<endl;
            pos+=arr[i];
        }
    }
    return 0;
}
