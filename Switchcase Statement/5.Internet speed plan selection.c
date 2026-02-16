#include <stdio.h>
int main() {
    int planType;
    scanf("%d",&planType);
    switch(planType) {
        case 1:
            printf("Speed Mbps:40Mbps");
            break;
        case 2:
            printf("Speed Mbps:100Mbps");
            break;
        case 3:
            printf("Speed Mbps:200Mbps");
    }
    return 0;
}