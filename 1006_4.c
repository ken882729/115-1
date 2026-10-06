#include <stdio.h>
int main(){
    int login;
    int black;
    int bank;
    int m;
    printf("請輸入登入狀態1登入0無");
    scanf("%d",&login);
    printf("請輸入帳戶餘額");
    scanf("%d",&bank);
    printf("請輸入提款金額");
    scanf("%d",&m);
    printf("請輸入黑名單狀態1是0否");
    scanf("%d",&black);
    if(login==1 && bank>=m && !black){
    printf("可以提款");
    }
    else
    {
    printf("不可提款");
    }
    return 0;
}