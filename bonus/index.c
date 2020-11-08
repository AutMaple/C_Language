#include <stdio.h>

double if_else_bonus(double profit);
double recursive_bonus(double profit);

int main()
{
  double profit;
  printf("请输入您的净利润:");
  scanf("%lf", &profit);
  double bonus1 = if_else_bonus(profit);
  double bonus2 = recursive_bonus(profit);
  printf("您的奖金是: %.3lf\n", bonus1);
  printf("您的奖金是: %.3lf\n", bonus2);
  return 0;
}

double if_else_bonus(double profit){ 
  double bonus1, bonus2, bonus4, bonus6, bonus10;
  bonus1 = 100000 * 0.1;
  bonus2 = bonus1 + 100000 * 0.075;
  bonus4 = bonus2 + 200000 * 0.05;
  bonus6 = bonus4 + 200000 * 0.03;
  bonus10 = bonus6 + 400000 * 0.015;
  double bonus;
  if(profit <= 100000){
    bonus = profit * 0.1;
  }else if(profit <= 200000){
    bonus = bonus1 + (profit - 100000) * 0.075;
  }else if(profit <= 400000){
    bonus = bonus2 + (profit - 200000) * 0.05;
  }else if(profit <= 600000){
    bonus = bonus4 + (profit - 400000) * 0.03;
  }else if (profit <= 1000000){
    bonus = bonus6 + (profit - 400000) * 0.015;
  }else{
    bonus = bonus10 + (profit - 1000000) * 0.01;
  }
  return bonus;
}

double recursive_bonus(double profit){
  if(profit <= 100000){
    return profit * 0.1;
  }else if( profit <= 200000 ){
    return recursive_bonus(100000) + (profit - 100000) * 0.075;
  }else if( profit <= 400000 ){
    return recursive_bonus(200000) + (profit - 200000) * 0.05;
  }else if( profit <= 600000 ){
    return recursive_bonus(40000) + (profit - 400000) * 0.03;
  }else if( profit <= 1000000 ){
    return recursive_bonus(600000) + (profit - 600000) * 0.015;
  }else{
    return recursive_bonus(1000000) + (profit - 1000000) * 0.01;
  }
}
