#include <stdio.h>
int main(){
    int choice;
    printf("產品選項有 \n1.紅茶30元 \n2.綠茶35元 \n3.奶茶50元 \n4.果汁45元 \n請輸入您的選擇");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("您選擇紅茶30元");
            break;
        case 2:
            printf("您選擇綠茶35元");
            break;
        case 3:
            printf("您選擇奶茶50元");
            break;
        case 4:
            printf("您選擇果汁45元");
            break;
        default:
            printf("無此飲料選項");
    }
}