#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if((a%4==0)&&(a%100==0)){
        printf("Not a Leap Year");
    }
    else if(n%400){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}