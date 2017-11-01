#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

  int n;
  std::vector<int> image_data(13);
  string temp1,temp2;
  int max_temp;
  while(1){
    cin >> n;
    getline(cin, temp1);
    if(n == 0) break;
    //image.resize(n);
    max_temp = 0;
    for(int i=0;i<n;i++){
      getline(cin, temp1);
      image_data[i] = 0;
      for(int j=0;j<temp1.size();j++){
        if(temp1[j] == 'X') image_data[i]++;
      }
      if(image_data[i] > max_temp){
        max_temp = image_data[i];
      }
    }

    //find blanks
    int ans = 0;
    for(int i =0;i<n;i++){
      ans += (max_temp - image_data[i]);
    }
    cout << ans << endl;
  }
  return 0;
}
