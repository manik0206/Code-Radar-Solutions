#include <stdio.h>
int main() {
    int a;
    scanf("%d",&n);
    if((a%4==0)&&(a%100==0)){
        printf("Not a Leap Year");
    }
    else if(a%400){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}