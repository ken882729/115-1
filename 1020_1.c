#include <stdio.h>
int main(){
int num=0;
printf("請輸入密碼，輸入-1結束");
scanf("%d",&num);
while (num !=-1)
{
    if(num==1234){
        printf("登入成功");
        break;
    }
    else {
        printf("密碼錯誤，請重新輸入");
        scanf("%d",&num);
    }
}
if(num==-1){
    printf("已退出程式\n");
}
return 0;
}