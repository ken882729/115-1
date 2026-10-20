#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i+=1){
        if(i==4){
            printf("寶箱%d是空的，跳過\n",i);
            continue;
        }
        if(i==8){
        printf("找到神寶藏!位於寶箱%d\n",i);
        break;
    }
    printf("開啟寶箱%d\n",i);
    }
    printf("尋寶結束!");
    return 0;
}