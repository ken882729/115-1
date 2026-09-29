#include <stdio.h>
int main(){
    float h;
    printf("請輸入三角形的高");
    scanf("%f",&h);
    float b;
    printf("請輸入三角形的底");
    scanf("%f",&b);
    printf("三角形的面積是:%.2f",h*b/2);
    return 0;
}