#include <stdio.h>
int main(){
    int i;
    int j;
    for(i=1;i<=7;i+=2){
    for(j=1;j<=7-i;j+=2){
    printf(" ");
    }
    for(j=1;j<=i;j++){
    printf("@");
    }
    printf("\n");
    }
    return 0;
}