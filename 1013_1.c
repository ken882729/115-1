#include <stdio.h>
int main(){
    int age;
    printf("輸入乘客的年齡:");
    scanf("%d",&age);
    if(age>=65){
        printf("敬老票");
    }
    else if(age>=13){
        printf("全票");
    }
    else{
    if(age>=7){
        printf("兒童票");
    }
    else{
        printf("免費");
    }
    }
    return 0;
}