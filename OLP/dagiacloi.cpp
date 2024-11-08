#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream inputFile("OLP2023_03.INP");
	ofstream outputFile("OLP2023_03.OUT");
	  
	int n;
	
	inputFile >> n;

	int dinh[n+1];
	
	int a=INT_MIN,b=INT_MAX,c=INT_MIN,d=INT_MAX;
	
	for(int i=0; i<n; i++){
		int x , y;
		inputFile >> x >> y;
		
		a = max(a, x);
		b = min (b, x);
		c = max(c, y);
		d = min (d, y);
	}
	
	outputFile << (a-b)*(c-d);

	
	return 0;
}
