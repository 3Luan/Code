#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int count1 = 0, correct=0;
int c1=0, c2=0;

void check(int index, int c2, string s2){
    if(index == s2.size()){
      if(c2==c1){
        correct++;
      }
      count1++;
      return;
    }
    
    if(s2[index] == '+'){
      check(index+1, c2+1, s2);
    }else if(s2[index] == '-'){
      check(index+1, c2-1, s2);
    }else{
      check(index+1, c2+1, s2);
      check(index+1, c2-1, s2);
    }
}

int main()
{
  cin >> s1 >> s2;
  
  for(int i=0; i<s1.size(); i++){
    if(s1[i] == '+'){
      c1++;
    }else if(s1[i] == '-'){
      c1--;
    }
  }
  
  check(0,0,s2);
  
  cout << fixed << setprecision(12) << (double)correct/count1;

  return 0;
}
