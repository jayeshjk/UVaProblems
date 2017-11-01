#include <stdio.h>

int main(){
  int t;
  int w,y1,y2;
  int diff;
  bool success;
  scanf("%d", &t);
  for(int i = 0;i<t;i++){
    scanf("%d", w);
    diff = -1;
    success = true;
    for(int j=0;j<w;j++){
      scanf("%d %d", y1, y2);
      if(diff == -1){
        diff = y1 - y2;
      }
      else if(diff != (y1 - y2)){
        success = false;
      }
    }
    if(success == false){
      printf("no\n");
    }else{
      printf("yes\n");
    }
  }

  return 0;
}
