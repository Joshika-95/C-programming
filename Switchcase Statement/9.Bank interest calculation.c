#include <stdio.h>
int main() {
    int accType;
    int years;
    scanf("%d%d", &accType,&years);
    switch (accType) {
        case 1:
            printf("4");
            break;
        case 2:
            if (years<=3) {
                printf("5");
                break;
            }
            else if (years>3){
                printf("7");
                break;
            }
    }
    return 0;
}