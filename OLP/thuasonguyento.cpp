#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void result(int& n, int i) {
    if (n % i == 0) {
    	cout << i;
    	if(n/i != 1){
    		cout << "*";
		}
        n /= i;
        result(n, i);
    }
}

int main() 
{
//    ifstream cin("OLP2023.INP");
//    ofstream cout("OLP2023.OUT");

	int n;
    cin >> n;
//    cin.close();

	bool a[n+2] = {0};
	
	for(int i = 2; i<=n; i++){
		if(!a[i]){
			for(int j = i*i; j<=n; j+=i){
				a[j] = true; 	
			}
		}
	}
	
	if(!a[n]){
		cout << n;
	}else{
		for(int i = 2; i<=n; i++){
			if(!a[i]){
				result(n, i);
			}
		}
	}
	
//    cout.close();
    return 0;
}

