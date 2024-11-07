#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

#define ll unsigned long long

int main() 
{
//    ifstream cin("OLP2023.INP");
//    ofstream cout("OLP2023.OUT");

	int n;
    cin >> n;
//    cin.close();
	ll a[n+1][12];
	ll a[n+1][12];
	
	for(int i=0; i<n;i++){
		for(int j=0; j<11; j++){
			cin >> a[i][j];
		}
	}
	
	ll rs = 0;
	
	for(int i = 0; i<11; i++){
		ll m = 0;
		for(int j=0; j<n; j++){
			m = max(m, a[j][i]);
		}
		
		rs+=m;
	}
	
	cout << rs;

	
//    cout.close();
    return 0;
}

