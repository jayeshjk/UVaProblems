#include <stdio.h>
#include <stdlib.h>

int main(){

  int t,r,c, ans;
  scanf("%d", &t);
  while(t-- > 0){
    scanf("%d %d", &r, &c);
    ans = ceil((r - 2)/3) * ceil((c-2)*3);
    printf("%d\n", ans);  
  }
  return 0;
}
