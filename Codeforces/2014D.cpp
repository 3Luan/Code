#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main(){
	int t, n, d, k;
	cin >> t;
	
	while(t--){
		cin >> n >> d >> k;
			
		int arr[n-d+3]={0};
		int l;
		int r;
		
		for(int x=1; x<=k; x++){
			cin >> l >> r;
			for(int i=1; i<=n-d+1; i++){
				for(int j=i; j<=i+d-1; j++){
					if(j>=l && j<=r){
						arr[i]++;
						break;
					}
				}
			}
		}
		
	  	int max_value = 0;
	    int min_value = INT_MAX;
	    int max_index = 0;
	    int min_index = INT_MAX;

	    for (int i = 1; i < n-d+2; i++) {
            if (arr[i] > max_value) {
                max_value = arr[i];
                max_index = i;
            }

            if (arr[i] < min_value) {
                min_value = arr[i];
                min_index = i;
            }
	    }
    	cout << max_index << " " << min_index << endl;
	}
	
	
	return 0;
}

