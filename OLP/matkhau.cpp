#include <bits/stdc++.h>

using namespace std;

set<string> a;

bool checkP(string s){
	for(int i=0; i<s.size()/2; i++){
		if((i+1)%2 != 0){
			if(s[i] != s[s.size() - i - 1]){
				return false;
			}
		}else{
			if(s[i] == s[s.size() - i - 1]){
				return false;
			}
		}
	}
	
	return true;
}

void result(int idx, int n, string& s, string& c) {
    if (c.length() % 2 == 0 && c.length() > 0) {
        if (checkP(c)) {
            a.insert(c);
        }
    }

    for (int i = idx; i < n; ++i) {
        c.push_back(s[i]);
        result(i + 1, n, s, c);
        c.pop_back();
    }
}


int main() 
{
	ifstream cin("OLP2024_01.INP");
	ofstream cout("OLP2024_01.OUT");
	  
	int n;
	string s , c = "", p = "";
	
	cin >> n >> s;
  
  	result(0, n, s, c);
	
	for (auto x : a) {
	    if (x.size() > p.size()) {
	        p = x;
	    }
  	}
  
	cout <<p;
	
	return 0;
}

