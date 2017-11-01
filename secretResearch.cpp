#include <string>
#include <iostream>
using namespace std;

int main(){
  int t;
  string s;
  string :: iterator it;
  cin >> t;
  for(int i = 0;i<t;i++){
    cin >> s;

    if(s == "1" || s == "4" ||s == "78"){
      cout << "+" << endl;
      continue;
    }

    int len = s.size();
    if(s[len - 1] == '5' && s[len - 2] == '3'){
      cout << "-" << endl;
      continue;
    }

    if(s[0] == '9' && s[len-1] =='4'){
      cout << "*" << endl;
      continue;
    }

    if(len >= 3 && s[0] == '1' && s[1] == '9' && s[2] == '0'){
      cout << "?" << endl;
      continue;
    }
  }

  return 0;
}
