#include <stdio.h>
int main() {
    int n,a;
    scanf("%d %d",&n,&a)
    n=n>>a;
    printf("%d",n);
    return 0;
}