#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> an, am;
   
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        an.push_back(a);
    }
    
    for(int i=0; i<m; i++){
        int a;
        cin >> a;
        am.push_back(a);
    }
    
    sort(an.begin(), an.end());
    sort(am.begin(), am.end());
    
    int nmin = an[0];
    int nmax = an[n-1];
    int mmin = am[0];
    
    // cout<<"nmin: "<< nmin<<endl;
    // cout<<"nmax: "<< nmax<<endl;
    // cout<<"mmin: "<< mmin<<endl;
    
    int TL = max(nmin*2, nmax);
    
    if(TL < mmin){
        cout<< TL;
    }else{
        cout << -1;
    }

    return 0;
}
