#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(intj=1;j<=2n-i;j++){
            printf("*")
        }
        for(int k=1;k<=n-i,k++){
            printf(" ")
        }
    }
    printf("\n")
    return 0;
}