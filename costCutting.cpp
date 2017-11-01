#include <stdio.h>

int main(){

  int t,a,b,c,middle;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d %d\n", &a, &b, &c);

    if(a==b || a==c) middle = a;
    else if (b==c) middle = b;
    else middle = (a < b)?(b<c?b:(a<c?c:a)):(a<c?a:(b<c?c:b));

    printf("Case %d: %d\n", i+1,middle);
  }
  return 0;
}
