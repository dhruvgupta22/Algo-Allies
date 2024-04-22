#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int p=0; p<t; p++){
        int n;
        cin>>n;
        vector <int> v, v_even, v_odd;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int even_min, odd_min;
        bool flag;
        for(int i=0; i<n; i++){
            if(v[i]<=0){
                flag = 0;
                break;
            }
            else{
                if(v[i]%2 == 0){
                    v_even.push_back(v[i]);
                }
                else{
                    v_odd.push_back(v[i]);
                }
            }
        }
        if(v_odd.empty() || v_even.empty()){
            flag = 1;
        }
        else{
            even_min = *min_element(v_even.begin(), v_even.end());
            odd_min = *min_element(v_odd.begin(), v_odd.end());
            if(even_min > odd_min){
            flag = 1;
            }
            else{
                flag = 0;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
