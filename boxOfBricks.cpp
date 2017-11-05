#include <iostream>
#include <vector>

using namespace std;

int main(){

  int n,sum,avg,moves,set_number = 1;
  while(1){
    cin >> n;
    if(n==0) break;
    sum = 0;
    moves = 0;
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
      cin >> v[i];
      sum += v[i];
    }

    avg = sum / n;

    for(int i=0;i<n;i++){
      if(v[i] > avg){
        moves += (v[i] - avg);
      }
    }
    cout << "Set #" << set_number++ << endl;
    cout << "The minimum number of moves is " << moves << "." << endl;
    cout << endl;
  }
  return 0;
}
