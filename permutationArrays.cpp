#include <iostream>
#include <vector>
#include <string>

using namespace std;

void splitStringInts(string s, vector<int>& v){

  //Proper format is expected. No trailing or leading spaces. Only one space between consecutive numbers
  //TODO: Allow any number spaces between numbers. -- put a loop once whitespace is encoutered
  //TODO: Handle trailing and leading spaces. -- Start from begin and end. Find first non-whitespace character and take substring
  // with these indexes.

  int len = s.size(), curr_value = 0;
  for(int i=0;i<len;i++){
    if(s[i] == ' '){
      //Add the computed number to vector
      v.push_back(curr_value);
      curr_value = 0;
    }else{
      curr_value = curr_value*10 + (s[i] - '0');
    }
  }
  v.push_back(curr_value); //No trailing spaces.
}

void splitStringFloats(string s, vector<double>& v){

  //Proper format is expected. No trailing or leading spaces. Only one space between consecutive numbers
  //TODO: Allow any number spaces between numbers.
  //TODO: Handle trailing and leading spaces.

  int len = s.size();
  double curr_value = 0.0;
  double divider = 1.0;
  bool decimalPoint = false;
  for(int i=0;i<len;i++){
    if(s[i] == ' '){
      //Add the computed number to vector
      v.push_back(curr_value);
      curr_value = 0.0;
      decimalPoint = false;
      divider = 1.0;
    }else{
      if(s[i] == '.'){
        decimalPoint = true;
      }
      else if(decimalPoint == false){
        curr_value = curr_value*10 + (s[i] - '0');
      }else if(decimalPoint == true){
        divider = divider/10.0;
        curr_value = curr_value + (s[i] - '0')*divider;
      }
    }
  }
  v.push_back(curr_value); //No trailing spaces.
}

void display(vector<int>& v){
  std::vector<int>::iterator it;
  for(it = v.begin(); it != v.end() ;it++){
    cout << *it << " ";
  }
  cout << endl;
}

void display1(vector<double>& v){
  std::vector<double>::iterator it;
  for(it = v.begin(); it != v.end() ;it++){
    cout << *it << " ";
  }
  cout << endl;
}

int main(){

  int n;
  string s;
  getline(cin,s);
  std::vector<int> v;
  splitStringInts(s,v);
  display(v);
  getline(cin,s);
  std::vector<double> v1;
  splitStringFloats(s,v1);
  display1(v1);

  return 0;
}
