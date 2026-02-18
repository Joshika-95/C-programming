#include<stdio.h>
int main() {
    int ATMCash;
    int n;
    scanf("%d%d",&ATMCash,&n);
    int withdraw;
    int i=0;
    int count=0;
    while(i<n) {
        scanf("%d",&withdraw);
        if (ATMCash>=withdraw) {
            ATMCash-=withdraw;
            count++;
        }
        else {
            i++;
            while(i<n) {
                scanf("%d",&withdraw);
                i++;
            }
            break;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\n",count);
    printf("Remaining Cash: %d",ATMCash);
    return 0;
}