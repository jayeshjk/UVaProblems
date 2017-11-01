#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  int testcases,n,k,temp,pos;
  std::vector<int> v;
  cin >> testcases;
  for(int i = 0;i<testcases;i++){
    cin >> n >> k;
    v.clear();
    for(int j = 0;j<n;j++){
      cin >> temp;
      v.push_back(temp);
    }
    sort(v.begin(),v.end());

    pos = (n + k)/2;
    cout << v[pos] << endl;
  }
  return 0;
}
