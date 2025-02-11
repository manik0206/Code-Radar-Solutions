#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    for(int i;i<=n;i++){
        if(n%2==0){
            count++;

        }
        if(count>2){
                printf("Not Prime");
            }
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}