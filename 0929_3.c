#include <stdio.h>
int main(){
    int l=9;
    int b=5;
    int k=2;
    int s=13;
    printf("目前設備狀態:%d\n",s&l);
    printf("目前設備狀態:%d\n",s&b);
    printf("目前設備狀態:%d\n",s&k);
    printf("廚房切換後設備狀態:%d\n",s^k);
    return 0;
}