#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 90 - 900 - 9000 / n<=10000
    
    if(n<=5){
    	cout << n+4;
	}else{
		if(n<=(90*2+5)){
			cout << (n-5)/2+9;
		} else if(n<=(900*3 + 90*2 + 5)){
			cout << (n-90*2-5)/3+9+90;
		} else {
			cout << (n-90*2-900*3-5)/4+9+90+900;
		}
	}
	

    return 0;
}

