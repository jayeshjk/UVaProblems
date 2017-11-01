#include <stdio>

int degrees(int from, int to, int direction){

  //clockwise = 1
  int angle;
  if(direction == 1){
    if(to > from) angle = from - to + 40;
    else angle = from - to;
  }
  else{
    if(to < from) angle = 40 - from + to
    else angle = to - from;
  }
  return angle * 9;
}
int main(){

  int start,n1,n2,n3,n4,ans;
  while(1){
    scanf("%d %d %d %d", &start, &n1, &n2, &n3);
    if(start == 0 && n1 == 0 && n2 == 0 && n3 == 0) break;

    ans = 2*360 + degrees(start,n1,1) + 360 + degrees(n1,n2,0) + degrees(n2,n3,1);
    printf("%d\n", ans);
  }
  return 0;
}

/*
case 1:
clok wise,to > from
to - from
clock wise, negative
40 - from + to

counterclockwise, to > from
 from + 40 - to
 counterclockwise, negative
 from - to
*/
