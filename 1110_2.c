#include<stdio.h>
int gold=1000;
void buyitem(){
    extern int gold;
    gold=gold-200;
    printf("購買完成，剩餘金幣%d",gold);
}
int main(){
    buyitem();
    return 0;
}