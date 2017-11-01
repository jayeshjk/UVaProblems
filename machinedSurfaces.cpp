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
    if(n == 0) break;
    if(n == 1) cout << "0" << endl;
    //image.resize(n);
    max_temp = 0;
    for(int i=0;i<n;i++){
      getline(cin, temp1);
      //cin >> temp1;
      //cin >> temp2;
      //image_data.push_back(temp1.size() + temp2.size());
      image_data[i] = 25 - (temp1.rfind((char)32) - temp1.find((char)32));
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
