#include <stdio.h>

int main(){
  double duration,down_payment,loan_amount,records,month,depriciation,prev_depriciation;
  while(1){
    scanf("%f %f %f %f\n", &duration, &down_payment, &loan_amount, &records);
    if(duration < 0) break;
    prev_depriciation = 0;
    for(int i=0,curr_month = 0;i<records;i++){
      scanf("%f %f\n", &month, &depriciation);
      if(month != curr_month){

      }else{
        
      }
    }
  }

  return 0;
}
