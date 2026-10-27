#include <stdio.h>
int add(int p,int q){
    return p*q;
}
int main(){
    int money,amount,total;
    printf("輸入數量");
    scanf("%d",&amount);
    printf("輸入金額");
    scanf("%d",&money);
    total=add(money,amount);
    printf("總金額是%d",total);
    return 0;
}