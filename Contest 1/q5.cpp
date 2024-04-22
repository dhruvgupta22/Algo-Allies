#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int luckiness(int x){
    vector<int> v;
    while(x > 0){
        v.push_back(x%10);
        x /= 10;
    }
    int max_digit, min_digit;
    max_digit = *max_element(v.begin(), v.end());
    min_digit = *min_element(v.begin(), v.end());

    return max_digit - min_digit;
}
int main(){
    int t;
    cin>>t;
    for(int p=0; p<t; p++){
        int x, y;
        cin>>x>>y;
        pair <int,int> max_lucky;
        max_lucky.first = x;
        max_lucky.second = luckiness(x);
        for(int i=x; i<=y; i++){
            if(luckiness(i)>=max_lucky.second){
                max_lucky.first = i;
                max_lucky.second = luckiness(i);
            }
            if(max_lucky.second == 9)break;
        }
        cout<<max_lucky.first<<endl;
    }

    return 0;
}
