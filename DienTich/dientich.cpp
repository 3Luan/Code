#include <bits/stdc++.h>

using namespace std;

int main() 
{
  
  ifstream inputFile("OLP2023_01.INP");

  int a1,a2;
  int b1, b2;
  int s1, s2, sc;
  
  inputFile >> a1 >> a2 >> b1 >> b2;
  
  // x=/10, y=%10
  
  s1 = (a2/10 - a1/10)*(a2%10 - a1%10);
  s2 = (b2/10 - b1/10)*(b2%10 - b1%10);
  
  sc = (abs(max(a1/10, b1/10) - min(a2/10, b2/10)) * abs(max(a1%10, b1%10) - min(a2%10, b2%10)));
  
  cout<<s1+s2-sc*2;
  
  return 0;
}
