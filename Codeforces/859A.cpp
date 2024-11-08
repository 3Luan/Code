#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    vector<int> r(26);
    int max = -1;
    
    cin>>k;
    
    for(int i =1; i<= k; i++){
        cin>>r[i];
        if(max < r[i]){
            max = r[i];
        }
    }

    if(max<=25){
        cout<<0;
    }else{
        cout<<max-25;
    }
    
    return 0;
}
