#include <stdio.h>
int main() {
    int totalData;
    int n;
    scanf("%d%d", &totalData,&n);
    int i=0;
    int days=0;
    while(i<n) {
        int usage;
        scanf("%d",&usage);
        totalData-=usage;
        if (totalData>=0){
            days++;
        }
        else{
            totalData=0;
            break;
        }
        i++;
    }
    printf("Days Used: %d\n",days);
    printf("Remaining Data: %dGB",totalData);
    return 0;
}