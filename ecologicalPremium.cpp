#include <stdio.h>

int main(){
  int t;
  int farmers;
  double area, animals, friendly,premium;
  scanf("%d\n", &t);
  for(int i = 0;i<t;i++){
      scanf("%d\n",&farmers );
      for(int j = 0;j<farmers;j++){
        scanf("%f %f %f\n", &area, &animals, &friendly);
        premium = area*friendly;
        printf("%f\n", premium);
      }
  }

  return 0;
}
