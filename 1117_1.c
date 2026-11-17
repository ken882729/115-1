#include<stdio.h>
int main(){
    int water[7];
    int weight;
    int sum=0;
    float average;
    int result;
    printf("請輸入您的體重(公斤)");
    scanf("%d",&weight);
    result=weight*30;
    for(int i=0;i<7;i++){
        printf("請輸入第%d天的飲水量(毫升)",i+1);
        scanf("%d",&water[i]);
        sum=sum+water[i];
        }
        average=sum/7;
        printf("7天平均引水量:%2f 毫升\n",average);
        printf("每日建議飲水量:%d毫升",result);
        if (average>=result){
            printf("評估結果:已達每日建議飲水量!");
        }
        else{
            printf("評估結果:未達每日建議飲水量!");
        }
    return 0;
}