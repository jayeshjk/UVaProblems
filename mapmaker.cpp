//#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(){

    vector<int> lower(11), upper(11);
    vector<vector<int> > c;
    int n,r;
    //scanf("%d %d", &n, &r);
    cin >> n >> r;
    string name;
    map<string,int> array_lookup;
    //array_lookup["jayesh"] = 1;
    int base, element_size, d;
    for(int i=0;i<n;i++){
        //take input information of arrays and compute c values
        //scanf("%s %d %d %d", &name, &base, &element_size, &d);
        cin >> name >> base >> element_size >> d;
        vector<int> temp(d+1);
        c.push_back(temp);
        for(int j=1;j<=d;j++){
            //scanf("%d %d", &lower[j],&upper[j]);
            cin >> lower[j] >> upper[j];
        }

        //compute c values here
        c[i][d] = element_size;
        int sum = c[i][d] * lower[d];
        for(int j = d-1;j >= 1;j--){
            c[i][j] = c[i][j+1] * (upper[j+1] - lower[j+1] + 1);
            sum += (lower[j] * c[i][j]);
        }
        c[i][0] = base - sum;

        //array_lookup.insert(pair<string,int>(name,i));
        array_lookup[name] = i;
        //printf("inserting %s %d\n", name,i);
    }
    map<string,int>:: iterator it;
    /*for (it=array_lookup.begin(); it!=array_lookup.end(); ++it){
      //printf("map %s %d %d\n",it->first, it->second, array_lookup.size());
      cout << "Map" << it->first << " " << it->second << endl;
    }*/


    //Process the queries using computed c values
    string array_name;
    for(int i=0;i<r;i++){
      //scanf("%s", &array_name);
      cin >> array_name;
      int array_index = array_lookup[array_name];
      //printf("%d %d\n",array_index,array_lookup.size());
      int d = c[array_index].size() - 1;
      //printf("%d\n",d);
      int ans = c[array_index][0];
      //printf("%d\n",ans);
      int temp;
      cout << array_name << "[";
      //printf("%s[", array_name);
      for(int j=1;j<=d;j++){
        //scanf("%d", &temp);
        cin >> temp;
        ans += (temp*c[array_index][j]);
        if(j==1) cout << temp;
        else cout << ", " << temp;
      }
      cout << "] = " << ans << endl;
      //printf("] = %d\n", ans);
    }
    return 0;
}
