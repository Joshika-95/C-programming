
#include<stdio.h>
int main() {
    int distanceCategory;
    scanf("%d",&distanceCategory);
    switch(distanceCategory) {
        case 1:
            printf("Transport Fee:800");
            break;
        case 2:
            printf("Transport Fee:1200");
            break;
        case 3:
            printf("Transport Fee:1800");
    }
    return 0;
}