
#include<stdio.h>
int main() {
    int accType;
    int bal;
    int withdrawAmot;
    int limit;
    scanf("%d%d%d",&accType,&bal,&withdrawAmot);
    switch(accType) {
        case 1:
            if (bal>=withdrawAmot) {
                printf("Transaction Succesfull");
                break;
            }
            else {
                printf("Transaction Failure");
                break;
            }
        case 2:

            if (limit==5000) {
                printf("Transaction Successfull");
                break;
            }
            else if (withdrawAmot > limit) {
                printf("Limit Exceeded");
            }
            return 0;
    }
}