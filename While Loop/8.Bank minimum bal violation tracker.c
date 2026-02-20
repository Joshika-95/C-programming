
#include<stdio.h>
int main() {
    int n;
    int initialBal;
    scanf("%d%d",&n,&initialBal);
    int i=0;
    int bal=initialBal;
    int days=0;
    int transaction;
    while(i<n) {
        scanf("%d",&transaction);
        bal=bal+transaction;
        if (bal<2000){
            days++;
        }
        i++;
    }
    printf("Final Balance: %d\n",bal);
    printf("Low Balance Days: %d",days);
    return 0;
}