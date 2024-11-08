#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream inputFile("OLP2023_02.INP");
	ofstream outputFile("OLP2023_02.OUT");
	  
	int m, n, k;
	inputFile >> m >> n >> k;
	
	int s=0;
	  
	while(m>=2 && n>=1){
		m-=2;
		n-=1;
		s++;
	}
	  
	if(m==0 && n==0){
		s--;
	}else if(m == 1 && n == 0){
		s--;
	}else if(m == 0 && n == 1){
		s--;
	}
	
	outputFile << s;

	
	return 0;
}
