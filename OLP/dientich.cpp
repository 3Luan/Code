#include <iostream>
#include <fstream>

using namespace std;

const int mod = 1000009; 

int main() {
    int n, l;
    cin >> n >> l;
    
    int x=0;

    for(int i=0; i<=n; i++){
    	x = (x +(l*l)) % mod ;
    	l*=2;
	}
	
	cout << x;
    return 0;
}

