
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=10;i++) {
        int mul=0;
        mul=n*i;
        printf(" %d",mul);
    }
    return 0;
}