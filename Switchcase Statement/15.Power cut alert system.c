
#include<stdio.h>
int main() {
    int hours;
    scanf("%d",&hours);
    switch(hours) {
        case 1:
            if (hours <=1) {
                printf("Short Interruption");
            }
        case 2:
            if (hours<=4) {
                printf("Medium Interruption");
            }
        case 3:
            if (hours>4) {
                printf("Long Interruption");
            }
    }
    return 0;
}