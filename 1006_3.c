#include <stdio.h>
int main(){
    int score;
    int a;
    printf("請輸入成績(分)");
    scanf("%d",&score);
    if (score>=60)
    { printf("請輸入出席率(%)");
    scanf("%d",&a);
    if (a>=80)
    {
        printf("課程通過");
    }
    else
        printf("成績不及格");
    }
    else
    {
    printf("成績不及格");
    }
    return 0;
}
