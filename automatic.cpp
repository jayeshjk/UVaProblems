#include <stdio.h>

int main(){

  int t,n,ans;
  scanf("%d", &t);
  for(int i=0;i<t;i++){
    scanf("%d\n", &n);
    ans = (n*567/9 + 7492)* 235/47 - 498;
    if(ans < 0) ans = ans * -1;

    int ten = (ans/10) % 10;
    printf("%d\n", ten);
  }
  return 0;
}
